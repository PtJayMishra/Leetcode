class Solution {
public:
    int minimumLength(string s) {
        // unordered_map<char , stack<int>> lr ;
        // unordered_map<char , queue<int>> rl;
        // for(int i =0 ; i < 2; i++){

        //    lr[s[i]].push(i);
        // }
        // for(int i =2 ; i < s.size(); i++){
        //     rl[s[i]].push(i);
        // }
        // for(int i =1 ; i < s.size(); i++){
        //     if(lr.find(s[i]) != lr.end() && rl.find(s[i])!= rl.end()){
        //         if(lr[s[i]].size()){
        //             int lh = lr[s[i]].top();
        //             lr[s[i]].pop();
        //             s.erase(s.begin()+ lh);
        //         }
        //          if(rl[s[i]].size()){

        //             int rh = rl[s[i]].front();
        //             rl[s[i]].pop();
        //             s.erase(s.begin()+ rh-1);
        //          }

        //     }
        // }
        // return s.size();
int ans =0;
        unordered_map<char , int> mp;
        for(char c : s)mp[c]++;
        for(auto it : mp){
            if(it.second == 0)continue;
            if(it.second % 2 ==0)ans+= 2;
            else ans+= 1;
        }
        return ans;
    }
};