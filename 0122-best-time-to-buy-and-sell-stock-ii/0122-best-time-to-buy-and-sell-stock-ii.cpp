class Solution {
public:

    int profit(int ind, vector<int>& prices, int buy,
               vector<vector<int>>& dp) {

        if (ind == prices.size()) {
            return 0;
        }

        if (dp[ind][buy] != -1)
            return dp[ind][buy];

        int profite = 0;

        if (buy == 1) {
            
            profite = max(
                -prices[ind] + profit(ind + 1, prices, 0, dp),
                profit(ind + 1, prices, 1, dp)
            );
        }
        else {
            
            profite = max(
                prices[ind] + profit(ind + 1, prices, 1, dp),
                profit(ind + 1, prices, 0, dp)
            );
        }

        return dp[ind][buy] = profite;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        vector<vector<int>> dp(n, vector<int>(2, -1));

        return profit(0, prices, 1, dp);
    }
};