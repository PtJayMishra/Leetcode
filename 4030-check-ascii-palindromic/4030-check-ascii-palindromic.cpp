class Solution {
public:
    
    bool isPalindromic(string s) {
        int lh =0 ; int rh  = s.size()-1;
        while(lh <= rh){
            for(int bit = 7 ; bit >=0 ; bit--){
                int lhb = (s[lh] >> bit )&1;
                int rhb = (s[rh]>> (7-bit))&1;
                if(lhb != rhb)return false;
            }
            lh++;
            rh--;

        }
        return true;
    }
};