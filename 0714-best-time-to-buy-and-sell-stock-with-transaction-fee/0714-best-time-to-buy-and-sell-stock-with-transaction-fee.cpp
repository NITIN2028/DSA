class Solution {
public:
     int profit(int ind, vector<int>& prices, int buy,
               vector<vector<int>>& dp,int fee) {

        if (ind == prices.size()) {
            return 0;
        }

        if (dp[ind][buy] != -1)
            return dp[ind][buy];

        int munafa = 0;

        if (buy == 1) {
            
            munafa = max(
                -prices[ind] + profit(ind + 1, prices, 0, dp,fee),
                profit(ind + 1, prices, 1, dp,fee)
            );
        }
        else {
            
            munafa = max(
                prices[ind] + profit(ind + 1, prices, 1, dp,fee)-fee,
                profit(ind + 1, prices, 0, dp,fee) );
        }

        return dp[ind][buy] = munafa;
    }
    int maxProfit(vector<int>& prices, int fee) {
     int n = prices.size();

        vector<vector<int>> dp(n, vector<int>(2, -1));
        
        return profit(0, prices, 1, dp,fee);   
    }
};