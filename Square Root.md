## 01. Square Root

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/square-root/1)

### Problem Description

**Task:** Given a positive integer n, find the square root of n. If n is not a perfect square, then return the floor value.Floor value of any number is the greatest Integer which is less than or equal to that number.Examples: Input: n = 4

#### Examples

##### Example 1

- **Output:**
```text
1Explanation: 1 is a perfect square, so its square root is 1.
```
- **Explanation:** Since, 11 is not a perfect square, floor of square root of 11 is 3.Input: n = 1

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-01 22:52:21
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    int floorSqrt(int n) {
        int low=1;
        int high=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            int k=mid*mid;
            if(k==n) return mid;
            if(k>n){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        
       return high; 
    }
};
```

*Generated on: 10/31/2026, 11:03:22 PM*