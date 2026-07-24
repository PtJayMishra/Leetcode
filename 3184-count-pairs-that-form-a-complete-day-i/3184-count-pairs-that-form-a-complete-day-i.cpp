class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int, int> mp;
       
        int cnt=0;
        for(int i =0; i < hours.size() ; i++){
            for(int j =i+1 ; j <  hours.size() ; j++){
                long long int sum = hours[j]+hours[i];
                if(sum % 24 == 0)cnt++;
            }
        }
        return cnt;
    }
};