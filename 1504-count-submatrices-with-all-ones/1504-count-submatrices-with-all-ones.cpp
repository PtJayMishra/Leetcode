class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> height(n, 0);

        int ans = 0;

        for (int i = 0; i < m; i++) {

            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0)
                    height[j] = 0;
                else
                    height[j]++;
            }

            vector<int> dp(n, 0);
            stack<int> st;

            for (int j = 0; j < n; j++) {

                while (!st.empty() &&
                       height[st.top()] >= height[j])
                    st.pop();

                if (st.empty()) {
                    dp[j] = height[j] * (j + 1);
                } else {
                    int prev = st.top();

                    dp[j] =
                        dp[prev] +
                        height[j] * (j - prev);
                }

                ans += dp[j];
                st.push(j);
            }
        }

        return ans;
    }
};