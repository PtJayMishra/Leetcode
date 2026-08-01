class Solution {
public:
    string smallestPalindrome(string s) {
        map<char , int>mp;
        for(char c : s)mp[c]++;
        string one ="";
        string two ="";
        char middle;
        for(auto it : mp){
            if(it.second % 2 == 0){
                for(int i =0 ; i < it.second /2 ; i++){
                    one+= it.first;
                }
            }
            else {
                middle = it.first;
                 
                 for(int i =0 ; i < it.second /2 ; i++){
                    one+= it.first;
                }

            }
        }

        for(int i =one.size()-1 ; i >=0; i--){
                   two+= one[i];
                }
                if(s.size() % 2 ==0)return one+two;
        return one+middle+two;
    }
};