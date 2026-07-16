class Solution {
public:
// bool check(int u , int v , vector<int> & nums , int tar){
//      for(int i = u ; i <v ; i++){
//         if(abs(nums[i] - nums[i+1]) > tar)return false;
//         else continue;
//      }
//      return true;
//}
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        
        vector<bool> ans;
        vector<int> breaks(n , 0);

        for(int  i =1 ; i < n ; i++){
            breaks[i] = breaks[i-1];
            if(abs(nums[i] - nums[i-1]) > maxDiff)breaks[i]++;
        }
         for (auto &q : queries) {
            int l = min(q[0], q[1]);
            int r = max(q[0], q[1]);

            ans.push_back(breaks[l] == breaks[r]);
        }
        return ans;
    }
};