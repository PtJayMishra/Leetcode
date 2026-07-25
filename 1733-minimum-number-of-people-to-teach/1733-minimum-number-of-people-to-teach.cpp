class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        unordered_map<int, unordered_map<int, int>> mp; // lang -> {personIdx(0-indexed) -> count}
        for (int i = 0; i < languages.size(); i++) {
            for (int j = 0; j < languages[i].size(); j++) {
                mp[languages[i][j]][i]++;
            }
        }

        unordered_set<int> needTeaching;

        for (auto& f : friendships) {
            int u = f[0], v = f[1];
            bool shareL = false;
            for (int lang : languages[u - 1]) {          // languages u actually knows
                if (mp[lang].count(v - 1)) {              // does v know this lang?
                    shareL = true;
                    break;
                }
            }
            if (!shareL) {
                needTeaching.insert(u);
                needTeaching.insert(v);
            }
        }

        if (needTeaching.empty()) return 0;

        int best = INT_MAX;
        for (int lang = 1; lang <= n; lang++) {
            int cost = 0;
            for (int person : needTeaching) {
                if (!mp[lang].count(person - 1)) cost++;  // does person know lang?
            }
            best = min(best, cost);
        }

        return best;
    }
};