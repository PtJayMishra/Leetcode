class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp; int cnt =0;
        for(int i : nums)mp[i]++;
        for(auto it : mp){
            if(it.second % k ==0)cnt+= it.second*it.first;
        }
        return cnt;
    }
};