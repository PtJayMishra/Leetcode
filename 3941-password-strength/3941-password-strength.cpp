class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char , int> lc , up , sc;
        unordered_map<int, int> mp;
        for(char c : password){
            if(isdigit(c))mp[c - '0'];
            else {
                int a = c-'A';
                int b = 'Z'-c;
                 int e = c-'a';
                int d ='z' -c;
                if(e >= 0  && d >=0)lc[c]++;
                else if(a >=0 && b>=0)up[c]++;
                else sc[c]++;
            }
        }
        long long int ans = lc.size()+ 2*up.size()+ 3*mp.size()+ 5*sc.size();
        return ans ;
    }
};