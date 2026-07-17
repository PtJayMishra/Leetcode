class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        int maxFreq = 0;
        vector<char > nums;

        // Step 1: Count frequencies
        for (char c : s) {
           nums.push_back(c);
        }
        for (char c : s) {
            freq[c]++;
            maxFreq = max(maxFreq, freq[c]);
        }


        // // Step 2: Bucket sort - vector of strings where index is frequency
        // vector<vector<char>> buckets(maxFreq + 1);
        // for (auto& [ch, count] : freq) {
        //     buckets[count].push_back(ch);
        // }

        // // Step 3: Build result from high to low frequency
        // string result;
        // for (int i = maxFreq; i >= 1; --i) {
        //     for (char ch : buckets[i]) {
        //         result += string(i, ch); // append ch, i times
        //     }
        // }
        sort(nums.begin(), nums.end(), [&](int a, int b) {
        // If frequencies are different, sort by frequency descending
        if (freq[a] != freq[b]) {
            return freq[a] > freq[b]; 
        }
        // If frequencies are the same, sort by value ascending
        return a < b; 
    });

    string ans = "";
     for (char c : nums) {
           ans+= c;
        }

        return ans;
    }
};
