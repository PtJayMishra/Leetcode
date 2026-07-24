class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int> res,    ans;
        
        for(int i =0 ; i < nums.size() ; i++){
            if( x == nums[i])res.push_back(i);
        }
        if(res.size() == 0){
            for(int i : queries)ans.push_back(-1);
        }
        else {
            int q = res.size();
        for(int i : queries){
            if(i > q)ans.push_back(-1);
            else {
            ans.push_back(res[i-1]);
            
            }
        }
        }
        return ans;
    }
};