class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        // if(groupSize == 1)return true;
        // if(n % groupSize != 0)return false;
        // if(n == 1 && groupSize == 1)return true;
        // if( n ==2 )return abs( hand[1]-hand[0])==1;
        // sort(hand.begin(), hand.end());
        // for(int i =1 ; i < hand.size() -1; i++){
        //     if(abs(hand[i] - hand[i-1]) == 1 | abs(hand[i+1] - hand[i]) == 1) continue;
        //     else return false;
        // }
        // return true;

        map<int, int> mp;
        for(int i : hand )mp[i]++;
        for(auto it : mp){
            if(mp[it.first ]>0){
                for(int i = groupSize -1; i >= 0 ; i--){
                    if((mp[it.first +i] -= mp[it.first] ) < 0)return false;
                }
            }
        }
        return true;
    }
};