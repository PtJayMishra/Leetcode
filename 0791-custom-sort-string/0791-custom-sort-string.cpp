class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char , int> mp;
        string ans="";
        for(char c : s)mp[c]++;
        for(char c : order){
            if(mp.find(c) != mp.end()){
                for(int i =0 ; i < mp[c] ; i++){
                    ans+= c;
                   
                } 
                mp.erase(c);
            }
            
            
        }
         for(auto it : mp){
             for(int i =0 ; i < it.second ; i++){
                    ans+= it.first;
                   
                }
            }
            return ans;
    }
};