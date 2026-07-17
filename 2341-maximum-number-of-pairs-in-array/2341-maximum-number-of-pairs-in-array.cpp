class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
  unordered_map<int, int> mp; int cnt =0;
  int lh =0;
  for(int i : nums)mp[i]++;
  for(auto it : mp){
    if(it.second%2 ==0)cnt+=it.second/2 ;
    else {
        cnt+=it.second/2;
        lh++;}
  }      
  return {cnt , lh};
    }
};