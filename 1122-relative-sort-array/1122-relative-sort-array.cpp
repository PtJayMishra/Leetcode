class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int, int> mp , p;


        for(int i : arr1)mp[i]++;
         for(int i : arr2)p[i]++;
        for(int i : arr2){
            for(int j =0 ; j < mp[i]; j++){
                ans.push_back(i);
            }
        }
        for(auto it : mp){
            if(p.find(it.first) == p.end()){
                for(int j =0 ; j < it.second; j++){
                ans.push_back(it.first);
            }
            }
        }
        return ans;
    }
};