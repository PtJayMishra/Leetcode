class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char , int>mp; 
        int cnt=0;
        for(char c : word)mp[c]++;
        for(auto it: mp){
            char c = it.first;
            if(islower(c) && mp.find(toupper(c)) != mp.end())cnt++;
               if(isupper(c) && mp.find(tolower( c)) != mp.end())cnt++;
        }
        return cnt/2;
    }
};