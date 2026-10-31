## 01. Consecutive 1's not allowed

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/consecutive-1s-not-allowed1912/1)

### Problem Description

**Task:** Given a positive integer n, count all possible distinct binary strings of length n such that there are no consecutive 1’s.Examples :Input: n = 3

#### Examples

##### Example 1

- **Output:**
```text
5
```
- **Explanation:** 5 strings are ("000", "001", "010", "100", "101").

##### Example 2

- **Input:**
```text
n = 2
```
- **Output:**
```text
2
```
- **Explanation:** 3 strings are ("00", "01", "10").Input: n = 1

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-20 15:15:38
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
public:
    int countStrings(int n) {

        if (n == 1) return 2;

        int a = 1; // f(0)
        int b = 2; // f(1)

        for (int i = 2; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};
```

*Generated on: 10/31/2026, 10:59:20 PM*