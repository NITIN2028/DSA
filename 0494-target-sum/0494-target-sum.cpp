class Solution {
public:

    int solve(int ind, vector<int>& nums, int target,
              vector<vector<int>>& dp, int sum) {

        // target DP range se bahar hai
        if(target < -sum || target > sum)
            return 0;

        if(ind == 0) {
            if(target == nums[0] && target == -nums[0])
                return 2;

            if(target == nums[0] || target == -nums[0])
                return 1;

            return 0;
        }

        int &ans = dp[ind][target + sum];

        if(ans != -1)
            return ans;

        int takenegative =
            solve(ind - 1, nums, target + nums[ind], dp, sum);

        int takepositive =
            solve(ind - 1, nums, target - nums[ind], dp, sum);

        return ans = takenegative + takepositive;
    }

    int findTargetSumWays(vector<int>& nums, int target) {

        int n = nums.size();

        int sum = 0;
        for(int x : nums)
            sum += x;

        if(abs(target) > sum)
            return 0;

        vector<vector<int>> dp(
            n,
            vector<int>(2 * sum + 1, -1)
        );

        return solve(n - 1, nums, target, dp, sum);
    }
};