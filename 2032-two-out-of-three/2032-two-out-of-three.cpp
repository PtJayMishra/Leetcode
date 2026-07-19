class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int , int > mp , mp1 , mp2 , mp3;
        vector<int> ans;
        for(int i : nums1){
            mp1[i]++;
            mp[i]++;
        }
         for(int i : nums2){
            mp2[i]++;
            mp[i]++;
        }
         for(int i : nums3){
            mp3[i]++;
            mp[i]++;
        }
        for(auto it : mp){
            int i = it.first;
            if((mp1.find(i) != mp1.end() && mp2.find(i) != mp2.end())  )ans.push_back(i);
            else if( ( mp2.find(i) != mp2.end() && mp3.find(i) != mp3.end()))ans.push_back(i);
            else if((mp1.find(i)!= mp1.end() && mp3.find(i) != mp3.end() ) )ans.push_back(i);


        }
        return ans;
    }
};