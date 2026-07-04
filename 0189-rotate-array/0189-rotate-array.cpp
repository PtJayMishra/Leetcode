class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans = nums;
        nums.clear(); int n = ans.size();
         k = k % n;
        for(int i =n- k ; i< n ; i++){
            nums.push_back(ans[i]);
        }
        for(int i =0 ; i < n-k; i++){
             nums.push_back(ans[i]);
        }

    }
};