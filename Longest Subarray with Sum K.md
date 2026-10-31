## 01. Longest Subarray with Sum K

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1)

### Problem Description

**Task:** Given an array arr[] containing integers and an integer k, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.Examples:Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15

#### Examples

##### Example 1

- **Output:**
```text
0
```
- **Explanation:** No subarray with sum = 5 is present in arr[].

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-07 00:27:57
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution{
public:
    int longestSubarray(vector<int> &arr, int k){
        int n =arr.size();
        int sum=0;
        int maxi=0;
        map<long long ,int>mp;
        for (int i=0;i<n;i++){
             sum+=arr[i];
             if(sum==k){
                 maxi=max(maxi,i+1);
                 
             }
             int rem=sum-k;
             if(mp.find(rem)!=mp.end()){
                 int len=i-mp[rem];
                 maxi=max(maxi,len);
             }
             if(mp.find(sum)==mp.end()){
                 mp[sum]=i;
             }
        }
        
       
     return maxi;
    }
};
```

*Generated on: 10/31/2026, 11:00:55 PM*