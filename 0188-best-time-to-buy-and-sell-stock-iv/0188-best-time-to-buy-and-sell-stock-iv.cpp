class Solution {
public:
    int munafa(int ind,int buy,int res,vector<int>&prices,vector<vector<vector<int>>>&dp,int n){
    if(ind==n) return 0;
    if(res==0) return 0;
    if(dp[ind][buy][res]!=-1) return dp[ind][buy][res];
    
    if(buy==1){
        return  dp[ind][buy][res]=max(-prices[ind]+munafa(ind+1,0,res,prices,dp,n),munafa(ind+1,1,res,prices,dp,n));
    }
    else{
        return dp[ind][buy][res]= max(prices[ind]+munafa(ind+1,1,res-1,prices,dp,n),munafa(ind+1,0,res,prices,dp,n));
    }
   }
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        
        return munafa(0,1,k,prices,dp,n);
        
    }
};