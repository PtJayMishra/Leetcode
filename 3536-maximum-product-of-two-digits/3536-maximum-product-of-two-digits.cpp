class Solution {
public:
    int maxProduct(int n) {
         string s = to_string(n);
        int a  , b ;
         
        sort(s.begin( ) , s.end());
        
      int  i = s.size();
            a = s[i-1] - '0';
            b = s[i-2] - '0';
           int maxi    =  a*b;
        
        return maxi;
    }
};