class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int res =0;
        string top , bot ;
        int tops , bots;
        if(y >x){
            top = "ba";
            tops =y;
            bot ="ab";
            bots = x;
        }else {
            top = "ab";
            tops = x;
            bot = "ba";
            bots = y;
        }
        vector<char > stack;
        for(char ch : s){
            if(ch == top[1] && !stack.empty() && stack.back() == top[0]){
                res+= tops;
                stack.pop_back();
            }
            else {
                stack.push_back(ch);
            }
        }
         vector<char > st;
        for(char ch : stack){
            if(ch == bot[1] && !st.empty() && st.back() == bot[0]){
                res+= bots;
                st.pop_back();
            }
            else {
                st.push_back(ch);
            }
            }return res;
    
    }
};