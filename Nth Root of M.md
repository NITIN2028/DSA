## 01. Nth Root of M

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1)

### Problem Description

**Task:** You are given 2 numbers n and m, the task is to find ^n√m (n^th root of m). If the root is not integer then return -1.

#### Examples

##### Example 1

- **Input:**
```text
n = 3, m = 8
```
- **Output:**
```text
2
```
- **Explanation:** 2³ = 8

##### Example 2

- **Input:**
```text
n = 3, m = 9
```
- **Output:**
```text
-1
```
- **Explanation:** 3rd root of 9 is not integer.

##### Example 3

- **Input:**
```text
n = 4, m = 16
```
- **Output:**
```text
2
```
- **Explanation:** 2⁴ = 16

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log m)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-01 23:30:48
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
public:
    int power(int base, int n, int m) {
        int result = 1;

        for (int i = 0; i < n; i++) {
            result *= base;

            if (result > m)
                return result;
        }

        return result;
    }

    int nthRoot(int n, int m) {
        if (m == 0) return 0;
        if (n == 1) return m;

        int low = 1;
        int high = m;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            int val = power(mid, n, m);

            if (val == m)
                return mid;
            else if (val < m)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return -1;
    }
};
```

*Generated on: 10/31/2026, 11:02:51 PM*