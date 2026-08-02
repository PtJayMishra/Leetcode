class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
         int ans =0;
        for(int i : arr1){
             int cnt =0;
            for(int j : arr2){
                if(abs(i -j) <= d)cnt++;
            }
            if(cnt ==0)ans++;
        }
        return ans;
    }
};