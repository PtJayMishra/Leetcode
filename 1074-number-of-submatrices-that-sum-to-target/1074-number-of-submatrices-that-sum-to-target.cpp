class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int ans =0;
        for(int top = 0 ; top < rows ; top++){
            vector<int> temp(cols , 0);
            for(int bot =top ; bot < rows ; bot++){
                for(int c =0 ; c < cols ; c++){
                    temp[c] += matrix[bot][c];
                }
                unordered_map<int , int> mp;
                mp[0]=1;
                int prefix = 0;
                for(int d : temp){
                    prefix+= d;
                    if(mp.count(prefix - target))ans += mp[prefix- target];
                    mp[prefix]++;
                }
            }
        }
        return ans;
    }
};