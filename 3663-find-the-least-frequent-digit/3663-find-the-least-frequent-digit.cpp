class Solution {
public:
    int getLeastFrequentDigit(int n) {
       unordered_map<int , int> mp;

      while(n >0){
        int rem = n%10;
        n/= 10;
        mp[rem]++;
      }

      int mini =INT_MAX;
      int ans ;
      for(auto it : mp){
        if(mini > it.second ){
            ans = it.first;
            mini = it.second;
        }
       else if(mini == it.second){
            ans = min(ans , it.first);
        }
      }
      return ans;
    }
};