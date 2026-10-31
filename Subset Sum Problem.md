## 01. Subset Sum Problem

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)

### Problem Description

**Task:** Given an array of positive integers arr[] and a value sum, find if there is a subset of arr[] with sum equal to given sum. Examples:Input: arr[] = [3, 34, 4, 12, 5, 2], sum = 9Output: true

#### Examples

##### Example 1

- **Explanation:** Here there exists a subset with target sum = 9, 4+3+2 = 9.

##### Example 2

- **Input:**
```text
arr[] = [3, 34, 4, 12, 5, 2], sum = 30
```
- **Output:**
```text
trueExplanation: The entire array can be taken as a subset, giving 1 + 2 + 3 = 6.
```
- **Explanation:** There is no subset with target sum 30.Input: arr[] = [1, 2, 3], sum = 6

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(sum*n)
- **Expected Auxiliary Space Complexity:** O(sum)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-09-30 23:45:03
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
public:
    bool solve(int ind, int sum, vector<int>& arr, vector<vector<int>>& dp) {

        if(sum == 0) return true;

        if(ind == 0) {
            return arr[0] == sum;
        }

        if(dp[ind][sum] != -1)
            return dp[ind][sum];

        bool nottake = solve(ind - 1, sum, arr, dp);

        bool take = false;

        if(arr[ind] <= sum) {
            take = solve(ind - 1, sum - arr[ind], arr, dp);
        }

        return dp[ind][sum] = take || nottake;
    }

    bool isSubsetSum(vector<int>& arr, int sum) {

        int n = arr.size();

        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));

        return solve(n - 1, sum, arr, dp);
    }
};
```

*Generated on: 10/31/2026, 10:55:42 PM*