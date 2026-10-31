## 01. Count Occurrences in Sorted

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1)

### Problem Description

**Task:** Given a sorted array arr[] and a number target, find the number of occurrences of target in given array. Examples:Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2

#### Examples

##### Example 1

- **Output:**
```text
3
```
- **Explanation:** target = 12 occurs 3 times in the given array so the output is 3.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-07-29 16:38:27
- **Status:** Correct
- **Marks:** 0

```cpp
class Solution {
public:

    int firstOccurrence(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                ans = mid;
                high = mid - 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int lastOccurrence(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                ans = mid;
                low = mid + 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int countFreq(vector<int>& arr, int target) {

        int first = firstOccurrence(arr, target);

        if (first == -1)
            return 0;

        int last = lastOccurrence(arr, target);

        return last - first + 1;
    }
};
```

#### Solution 2 (C++)

- **Submitted:** 2026-07-29 16:38:20
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
public:

    int firstOccurrence(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                ans = mid;
                high = mid - 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int lastOccurrence(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target) {
                ans = mid;
                low = mid + 1;
            }
            else if (arr[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }

    int countFreq(vector<int>& arr, int target) {

        int first = firstOccurrence(arr, target);

        if (first == -1)
            return 0;

        int last = lastOccurrence(arr, target);

        return last - first + 1;
    }
};
```

*Generated on: 10/31/2026, 11:04:42 PM*