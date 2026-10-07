class Solution {
public:
    int solve(int ind, vector<int>& arr, vector<vector<int>>& dp, int k) {

        if(ind == 0) {
            if(k == 0 && arr[0] == 0)
                return 2;

            if(k == 0 || arr[0] == k)
                return 1;

            return 0;
        }

        if(dp[ind][k] != -1)
            return dp[ind][k];

        int notTake = solve(ind - 1, arr, dp, k);

        int take = 0;

        if(arr[ind] <= k) {
            take = solve(ind - 1, arr, dp, k - arr[ind]);
        }

        return dp[ind][k] = take + notTake;
    }

    int countPartitions(int n, int d, vector<int>& arr) {

    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    if(abs(d) > sum)
        return 0;

    if((sum + d) % 2 != 0)
        return 0;

    int target = (sum + d) / 2;

    vector<vector<int>> dp(n, vector<int>(target + 1, -1));

    return solve(n - 1, arr, dp, target);
}
    int findTargetSumWays(vector<int>& nums, int target) {
        return countPartitions(nums.size(), target, nums);
    }
};