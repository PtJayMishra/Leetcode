class Solution {
public:
    int totalWaviness(int num1, int num2) {
        string s = to_string(num1);
        string p = to_string(num2);
        if(p.size()<3)return 0;
        int cnt=0;
         for(int i =num1 ; i <=num2; i++){
           s = to_string(i);
           for(int j =1 ; j < s.size() -1; j++){
            if(s[j] > s[j-1] && s[j] > s[j+1])cnt++;
            else  if(s[j] < s[j-1] && s[j] < s[j+1])cnt++;
           }
        

         }
         return cnt;
    }
};