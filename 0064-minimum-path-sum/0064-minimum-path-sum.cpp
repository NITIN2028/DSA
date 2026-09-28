class Solution {
public:
    int minpath(int m, int n, vector<vector<int>>& grid,
                vector<vector<int>>& dp) {

        if(m == 0 && n == 0)
            return grid[m][n];

        if(m < 0 || n < 0)
            return INT_MAX;

        if(dp[m][n] != -1)
            return dp[m][n];

        int up = minpath(m-1, n, grid, dp);
        int left = minpath(m, n-1, grid, dp);

        int upsum = INT_MAX;
        int leftsum = INT_MAX;

        if(up != INT_MAX)
            upsum = grid[m][n] + up;

        if(left != INT_MAX)
            leftsum = grid[m][n] + left;

        return dp[m][n] = min(upsum, leftsum);
    }

    int minPathSum(vector<vector<int>>& grid) {

        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return minpath(m-1, n-1, grid, dp);
    }
};