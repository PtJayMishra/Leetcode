class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin() , nums.end() );
        long long sum =0;
        int n = nums.size();
        for(int i =0 ; i < k ; i++){
             if(mul <= 0)sum += nums[n-i-1];
          else  { long long arr = (long long)mul*nums[n-i-1];
             sum += arr;}
           mul--;
           
        }return sum;
    }
};