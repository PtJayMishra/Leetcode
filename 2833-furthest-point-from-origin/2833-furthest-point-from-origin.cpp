class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        
        int cnt =0 ,  cntl =0 ,  cntr =0;
        for(char c : moves){
            ;
            if(c == 'L') {
                cntl++;
                
            }
            else if(c == 'R'){
                cntr++;
                
            }

           else {
            cnt++;
           }
        }
        return abs(cnt + (abs(cntl- cntr)));
    }
};