class Solution {
public:
    string sortSentence(string s) {
        map<char , string>mp;
        string p ;
        stringstream ss(s);
        string ans="";
        while(ss >>p){
           char index = p.back(); 
            
            p.pop_back();          
            mp[index] = p;
                    }
                    for(auto it : mp){
                        ans += it.second;
                        ans+= " ";
                    }
                    ans.erase(ans.begin() + ans.size()-1);
                    return ans;
    }
};