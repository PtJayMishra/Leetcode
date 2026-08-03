class Solution {
public:
    int countPoints(string rings) {
        unordered_map< int , unordered_map<char , int>>mp;
        for(int i =1 ; i < rings.size() ; i++){
                mp[rings[i]][rings[i-1]]++;
                i++;
        }
        int cnt=0;
        for(auto it : mp){
            if(it.second.size() >=3)cnt++;
        }
        return cnt;
    }
};