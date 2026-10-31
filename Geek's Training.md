## 01. Geek's Training

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/geeks-training/1)

### Problem Description

**Task:** Geek is attending a training program for n days. Each day he must perform exactly one of three activities: Running, Fighting, or Learning. Each activity earns a certain number of merit points, which can differ from day to day. To improve all his skills, Geek cannot perform the same activity on two consecutive days.Given a 2D matrix mat[][], where for the i-th day:mat[i][0] is the merit points for Runningmat[i][1] is the merit points for Fightingmat[i][2] is the merit points for LearningReturn the maximum total merit points Geek can earn over the n days.Example:Input: mat[][] = [[8, 7, 1], [9, 2, 1]]

#### Examples

##### Example 1

- **Output:**
```text
6
```
- **Explanation:** With only one day there is no consecutive-day restriction, so Geek simply picks the best activity, Learning, and earns 6 points.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-09-28 00:12:53
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
       int maxmerit(int days,int last,vector<vector<int>>& mat,vector<vector<int>>&dp){
           if(days==0){
               int maxi=0;
               for(int i=0;i<3;i++){
                   if(i!=last){
                       maxi=max(maxi,mat[0][i]);
                   }
               }
               return maxi;
           }
           if(dp[days][last]!=-1) return dp[days][last];
          int maxii = 0;

          for(int i = 0; i < 3; i++){
              if(i != last){
                  int points = mat[days][i] + maxmerit(days-1, i, mat,dp);
                  maxii = max(maxii, points);
              }
          }
           
           
           return dp[days][last]=maxii;
       }
    int maximumPoints(vector<vector<int>>& mat) {
        int n=mat.size();
        vector<vector<int>> dp(n, vector<int>(4, -1));
        return maxmerit(n-1,3,mat,dp);
        
        
       
        
    }
};
```

*Generated on: 10/31/2026, 10:57:06 PM*