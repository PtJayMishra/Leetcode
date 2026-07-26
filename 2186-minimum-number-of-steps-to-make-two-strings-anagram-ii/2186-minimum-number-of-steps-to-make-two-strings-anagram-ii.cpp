class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char , int> mp , kp;
        for(char c : s)mp[c]++;
        for(char c : t)kp[c]++;
    int cnt =0;
    for(auto it : mp){
        if(kp.find(it.first) == kp.end())cnt+= it.second;
        else cnt += abs(it.second - kp[it.first]);
    }
    for(auto it : kp){
        if(mp.find(it.first) == mp.end())cnt += it.second;
    }
    return cnt;
    }
};