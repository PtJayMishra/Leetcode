class Solution {
public:
    int partitionString(string s) {
        unordered_map<char , int> mp;
        int cnt =1;
        for(char c : s){
            
           if(mp.find(c)== mp.end()){
            mp[c]++;
           }
           else {
            mp.clear();
            cnt++;
            mp[c]++;
           }
           
        }
        return cnt;
    }
};