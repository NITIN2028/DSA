## 01. Floor in Sorted Array

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1)

### Problem Description

**Task:** Given a sorted array arr[] and an integer x, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the floor of x. If such an element does not exist, return -1.Note: In case of multiple occurrences of floor of x, return the index of the last occurrence.ExamplesInput: arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5

#### Examples

##### Example 1

- **Output:**
```text
4
```
- **Explanation:** No element less than or equal to 0 is found. So, output is -1.Constraints:1 ≤ arr.size() ≤ 10⁶¹ ≤ arr[i] ≤ 10⁶⁰ ≤ x ≤^ arr[n-1]

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-10-31 23:06:23
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
public:
    int findFloor(vector<int>& arr, int x) {

        int n = arr.size();

        int low = 0;
        int high = n - 1;

        int ans = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (arr[mid] <= x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-07-29 16:14:57
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
public:
    int findFloor(vector<int>& arr, int x) {

        int n = arr.size();

        int low = 0;
        int high = n - 1;

        int ans = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (arr[mid] <= x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};
```

*Generated on: 10/31/2026, 11:06:56 PM*