## 01. Search in a Row-Column Sorted

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1)

### Problem Description

**Task:** Given a 2D integer matrix mat[][], where every row and column is sorted in increasing order and a number x, return true if the element x is present in the matrix. Otherwise, return false.Examples:Input: mat[][] = [[3, 30, 38], [20, 52, 54], [35, 60, 69]], x = 62

#### Examples

##### Example 1

- **Output:**
```text
true
```
- **Explanation:** 3 is present in the matrix.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n + m)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-06 00:37:35
- **Status:** Correct
- **Marks:** 2

```cpp
class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        int n=arr.size();
        int m=arr[0].size();
        int i =0 ;
        int j =m-1;
        
        while(i<n&& j>=0){
            if(arr[i][j]==x) return true ;
            
            if(arr[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        // code here
      return false;  
    }
};
```

*Generated on: 10/31/2026, 11:01:30 PM*