class Solution {
public:
    int lengthOfLastWord(string s) {
         
        int n  = s.length();
        int ans =0;
        int check =0;
        for(int i =n-1 ; i >= 0 ; --i){
           
                if((s[i] >= 'a' && s[i]<='z') ||  (s[i] >= 'A' && s[i]<='Z')    )   ans++;
                     
                
                if(s[i] == ' ' && ans == 0){
                    continue;
                }
              else  if(s[i] == ' ' && ans > 0){
                break;
              }
                
        }return ans;
    }
};