class Solution {
public:

    int minsum(int m, int n, vector<vector<int>>& matrix,
               vector<vector<int>>& dp) {

        
        if(m == 0) {
            return matrix[0][n];
        }

        
        if(dp[m][n] != INT_MAX) {
            return dp[m][n];
        }

        int up = minsum(m-1, n, matrix, dp);

        int upleft = INT_MAX;
        if(n > 0) {
            upleft = minsum(m-1, n-1, matrix, dp);
        }

        int upright = INT_MAX;
        if(n < matrix[0].size()-1) {
            upright = minsum(m-1, n+1, matrix, dp);
        }

        return dp[m][n] = matrix[m][n] + min(up, min(upleft, upright));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> dp(m, vector<int>(n, INT_MAX));

        int ans = INT_MAX;

        
        for(int j = 0; j < n; j++) {
            ans = min(ans, minsum(m-1, j, matrix, dp));
        }

        return ans;
    }
};