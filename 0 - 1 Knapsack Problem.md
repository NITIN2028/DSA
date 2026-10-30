## 01. 0 - 1 Knapsack Problem

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1)

### Problem Description

**Task:** Given two arrays, val[] and wt[], where each element represents the value and weight of an item respectively, and an integer W representing the maximum capacity of the knapsack (the total weight it can hold).Put the items into the knapsack such that the total value obtained is maximum without exceeding the capacity W.Note: You can either include an item completely or exclude it entirely — fractional selection of items is not allowed. Each item is available only once.Examples :Input: W = 4, val[] = [1, 2, 3], wt[] = [4, 5, 1]Output: 3Explanation: Choose the last item, which weighs 1 unit and has a value of 3.Input: W = 3, val[] = [1, 2, 3], wt[] = [4, 5, 6] Output: 0Explanation: Every item has a weight exceeding the knapsack's capacity (3).Input: W = 5, val[] = [10, 40, 30, 50], wt[] = [5, 4, 2, 3] Output: 80Explanation: Choose the third item (value 30, weight 2) and the last item (value 50, weight 3) for a total value of 80.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O (n * W)
- **Expected Auxiliary Space Complexity:** O (W)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-10-06 01:23:42
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
public:

    int solve(int ind, vector<int>& val, vector<int>& wt, int W,vector<vector<int>>&dp) {

        if(W == 0)
            return 0;
        if(ind == 0) {
            if(wt[0] <= W)
                return val[0];

            return 0;
        }
        if(dp[ind][W]!=-1) return dp[ind][W];

        
        int nottake = solve(ind - 1, val, wt, W,dp);

        
        int take = 0;

        if(wt[ind] <= W) {
            take = val[ind] + solve(ind - 1, val, wt, W - wt[ind],dp);
        }

        return  dp[ind][W]=max(nottake, take);
    }

    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        int n = val.size();
        vector<vector<int>>dp(n,vector<int>(W+1,-1));
        

        return solve(n - 1, val, wt, W,dp);
    }
};
```

*Generated on: 10/31/2026, 12:04:56 AM*