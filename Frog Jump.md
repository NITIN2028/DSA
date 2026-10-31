## 01. Frog Jump

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/geek-jump/1)

### Problem Description

**Task:** Given an integer array height[] where height[i] represents the height of the i-th stair, a frog starts from the first stair and wants to reach the last stair.
From any stair i, the frog has two options: it can either jump to the (i+1)th stair or the (i+2)th stair. The cost of a jump is the absolute difference in height between the two stairs.
Determine the minimum total cost required for the frog to reach the last stair.

#### Examples

##### Example 1

- **Input:**
```text
heights[] = [20, 30, 40, 20]Output: 20Explanation: Minimum cost is incurred when the frog jumps from stair 0 to 1 then 1 to 3:jump from stair 0 to 1: cost = |30 - 20| = 10jump from stair 1 to 3: cost = |20 - 30| = 10Total Cost = 10 + 10 = 20
```

##### Example 2

- **Input:**
```text
heights[] = [30, 20, 50, 10, 40]Output: 30Explanation: Minimum cost will be incurred when frog jumps from stair 0 to 2 then 2 to 4:jump from stair 0 to 2: cost = |50 - 30| = 20jump from stair 2 to 4: cost = |40 - 50| = 10Total Cost = 20 + 10 = 30
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (3)

#### Solution 1 (C++)

- **Submitted:** 2026-09-26 21:18:42
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
  public:
    int solve(int n,vector<int>&height,vector<int>&dp){
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        int left=solve(n-1,height,dp)+abs(height[n]-height[n-1]);
        int right=INT_MAX;
        if(n>1){
             right=solve(n-2,height,dp)+abs(height[n]-height[n-2]);
        }
        
        return dp[n] =min(left,right);
    }
    int minCost(vector<int>& height) {
        int n=height.size();
        vector<int>dp(n,-1);
        return solve(n-1,height,dp);
        
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-09-10 01:56:30
- **Status:** Correct
- **Marks:** 0

```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int solve(int n, vector<int>& height, vector<int>& dp) {

        // Base case
        if (n == 0)
            return 0;

        // Already calculated
        if (dp[n] != -1)
            return dp[n];

        // Jump from n to n-1
        int left = solve(n - 1, height, dp)
                 + abs(height[n] - height[n - 1]);

        // Jump from n to n-2
        int right = INT_MAX;

        if (n > 1) {
            right = solve(n - 2, height, dp)
                  + abs(height[n] - height[n - 2]);
        }

        // Store and return minimum
        return dp[n] = min(left, right);
    }

    int minCost(vector<int>& height) {

        int n = height.size();

        vector<int> dp(n, -1);

        return solve(n - 1, height, dp);
    }
};
```

#### Solution 3 (C++)

- **Submitted:** 2026-09-10 01:45:04
- **Status:** Correct
- **Marks:** 4

```cpp
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int solve(int n, vector<int>& height, vector<int>& dp) {

        // Base case
        if (n == 0)
            return 0;

        // Already calculated
        if (dp[n] != -1)
            return dp[n];

        // Jump from n to n-1
        int left = solve(n - 1, height, dp)
                 + abs(height[n] - height[n - 1]);

        // Jump from n to n-2
        int right = INT_MAX;

        if (n > 1) {
            right = solve(n - 2, height, dp)
                  + abs(height[n] - height[n - 2]);
        }

        // Store and return minimum
        return dp[n] = min(left, right);
    }

    int minCost(vector<int>& height) {

        int n = height.size();

        vector<int> dp(n, -1);

        return solve(n - 1, height, dp);
    }
};
```

*Generated on: 10/31/2026, 10:57:43 PM*