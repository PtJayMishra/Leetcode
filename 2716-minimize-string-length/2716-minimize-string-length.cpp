class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char , int> mp;
        for(char c : s)mp[c]++;
        return mp.size();
    }
};