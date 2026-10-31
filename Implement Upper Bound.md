## 01. Implement Upper Bound

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/implement-upper-bound/1)

### Problem Description

**Task:** Given a sorted array arr[] and a number target, the task is to find the upper bound of the target in this given array.The upper bound is the smallest index in the sorted array where the element is greater than the given target. If all the elements in the given array are smaller than or equal to the target, the upper bound will be the length of the array.Examples :Input: arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9

#### Examples

##### Example 1

- **Output:**
```text
7
```
- **Explanation:** As no element in arr[] is greater than 100, return the length of array.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-07-29 16:06:10
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();

        int low = 0;
        int high = n - 1;

        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
```

*Generated on: 10/31/2026, 11:10:18 PM*