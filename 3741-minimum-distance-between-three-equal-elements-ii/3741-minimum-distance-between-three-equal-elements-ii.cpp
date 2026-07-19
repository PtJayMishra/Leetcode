class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int , vector<int>> mp;
         int ans = INT_MAX;
        for(int i =0 ; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }for(auto it : mp){
            if(it.second.size() >= 3){
                
                vector<int> v = it.second;
                 for (int i = 0; i + 2 < v.size(); i++) {
                ans = min(ans, 2 * (v[i + 2] - v[i]));
            }
               
            }
        }
        return  ans == INT_MAX ? -1 : ans;

    }
};