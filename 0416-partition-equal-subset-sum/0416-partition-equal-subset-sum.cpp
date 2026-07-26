class Solution {
public:
bool partitionEqualSubSetSum( int i , int tar , vector<int> & arr  , vector<vector<int>> & dp){
   if(tar == 0)return true;
   if( i ==0)return arr[0] == tar;
   if(dp[i][tar] != -1 )return dp[i][tar];

   bool nottaken = partitionEqualSubSetSum(i-1 , tar , arr , dp);
   bool taken = false;
   if(arr[i] <= tar){
    taken = partitionEqualSubSetSum(i-1 , tar - arr[i] , arr , dp);

   }
   return dp[i][tar] = taken || nottaken;


}
    bool canPartition(vector<int>& arr) {
         int sum = accumulate(arr.begin() , arr.end() , 0);
         if( sum %2 != 0)return false;
         int n = arr.size();
    vector<vector<int>> dp(n , vector<int>(sum/2 +1 , -1));
    return partitionEqualSubSetSum(n -1 , sum/2 , arr , dp);
    }
};