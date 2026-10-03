class Solution {
public:
    bool solve(int ind,vector<int>&arr,int sum,vector<vector<int>>&dp){
        if(sum==0) return true;
        if(ind == 0) {
            return arr[0] == sum;
        }

        if(dp[ind][sum] != -1)
            return dp[ind][sum];

        bool nottake = solve(ind - 1,arr,sum, dp);

        bool take = false;

        if(arr[ind] <= sum) {
            take = solve(ind - 1,arr, sum - arr[ind], dp);
        }

        return dp[ind][sum] = take || nottake;
    }

    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        vector<vector<int>> dp(n, vector<int>((sum/2) + 1, -1));
        return solve(n-1,nums,sum/2,dp);
        

        
    }
};