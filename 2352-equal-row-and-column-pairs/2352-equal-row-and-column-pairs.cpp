class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string , int> mp;
        int n = grid.size();
        int m = grid[0].size();
        for(int i =0 ; i < n ; i++){
            string s ="";
            for(int j =0 ; j < m ; j++){
                s+= to_string(grid[i][j]);
                s+=",";
            }
            mp[s]++;
        }
         int cnt =0;
         for(int i =0 ; i < n ; i++){
            string s ="";
            for(int j =0 ; j < m ; j++){
                s+= to_string(grid[j][i]);
                s+=",";
            }
             if(mp.find(s) != mp.end())cnt+= mp[s];
        }
        
        // for(auto it : mp){
        //     if(it.second> 1)cnt += it.second;
        // }
        return cnt;
    }
};