class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k, int m) {
        unordered_map<int , int> mp, p;
        long long res =0;
        int lh =0 , lhv =0, vcnt =0;
        for(int i =0 ; i <nums.size(); i++){
            mp[nums[i]]++;
            while(mp.size() >k){
                if(--mp[nums[lh]] ==0)mp.erase(nums[lh]);
                lh++;
            }
            if(++p[nums[i]] == m)vcnt++;
            while(vcnt >= k){
                if(p[nums[lhv]]-- == m)vcnt--;
                lhv++;
            }
            if(lhv > lh )res+= (lhv- lh);
        }
        return res;

        
    }
};