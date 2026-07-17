class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        // map<int, int> mp  ;
         unordered_map<int, int> m;
        
        
        for(int i : nums)m[i]++;
         
    
        sort(nums.begin(), nums.end(), [&](int a, int b) {
        // If frequencies are different, sort by frequency descending
        if (m[a] != m[b]) {
            return m[a] < m[b]; 
        }
        // If frequencies are the same, sort by value ascending
        return a > b; 
    });
        
        return nums;
    }
};