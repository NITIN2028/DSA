class Solution {
public:
     int loot(int ind,vector<int>&nums,vector<int>&dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick=nums[ind]+loot(ind-2,nums,dp);
        int ntpick=loot(ind-1,nums,dp);
        return dp[ind]=max(pick,ntpick);
     }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp1,temp2;
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
       return  max(loot(temp1.size()-1,temp1,dp1),loot(temp2.size()-1,temp2,dp2));
    }
};