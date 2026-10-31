## 01. All Subsequences of String

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/power-set4302/1)

### Problem Description

**Task:** Given a string s, generate all possible subsequences of the string (including the empty subsequence) and return them in lexicographical order.A subsequence is obtained by deleting zero or more characters from the string without changing the relative order of the remaining characters.Examples:Input : s = "abc"

#### Examples

##### Example 1

- **Output:**
```text
["", "a", "a", "aa"]
```
- **Explanation:** There are a total of 8 non-empty subsequences for the given string. Input: s = "aa"

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n*(2^n))
- **Expected Auxiliary Space Complexity:** O(n*(2^n))

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-21 01:40:52
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
public:

    void solve(int i, string &st, string &s, vector<string>& ans) {

        if (i == s.size()) {
            ans.push_back(st);
            return;
        }

        // TAKE
        st.push_back(s[i]);
        solve(i + 1, st, s, ans);
        st.pop_back();

        // NOT TAKE
        solve(i + 1, st, s, ans);
    }

    vector<string> powerSet(string &s) {

        vector<string> ans;
        string st = "";

        solve(0, st, s, ans);
        sort(ans.begin(),ans.end());

        return ans;
    }
};
```

*Generated on: 10/31/2026, 10:58:18 PM*