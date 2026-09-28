class Solution {
public:
    int minsum(int row,int col,vector<vector<int>>&triangle,vector<vector<int>>&dp){
     if(row == triangle.size()-1){
      return triangle[row][col];}
     if(dp[row][col]!=INT_MAX)return dp[row][col];
    int down=triangle[row][col]+minsum(row+1,col,triangle,dp);
    int rightdown=triangle[row][col]+minsum(row+1,col+1,triangle,dp);

    return dp[row][col]=min(down,rightdown);

    }

    
     

    
        
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        return  minsum(0,0,triangle,dp);
        
    }
};