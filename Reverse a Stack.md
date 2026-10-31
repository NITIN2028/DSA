## 01. Reverse a Stack

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/reverse-a-stack/1)

### Problem Description

**Task:** You are given a stack st[]. You have to reverse the stack.

> **Note:** The input array represents the stack from bottom to top (last element is the top). The output is displayed by printing elements from top to bottom after reversal.

#### Examples

##### Example 1

- **Input:**
```text
st[] = [1, 2, 3, 4]Output: [1, 2, 3, 4]Explanation: After reversing, the elements of stack are in opposite order.
```

##### Example 2

- **Input:**
```text
st[] = [3, 2, 1]Output: [3, 2, 1]Explanation: After reversing, the elements of stack are in opposite order.
```

#### Constraints

- **1.** `1 ≤ st.size() ≤ 1000 ≤ stack element ≤ 100`

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-08-20 01:58:19
- **Status:** Correct
- **Marks:** 4

```cpp
class Solution {
  public:
  
    void insertAtbottom(stack<int>&st,int x){
        if(st.empty()){
            st.push(x);
            return ;
        }
        int top = st.top();
        st.pop();
        insertAtbottom(st,x);
        st.push(top);
         
    }
    void reverseStack(stack<int> &st) {
        if(st.empty()) return ;
        
         int top = st.top();
         st.pop();
         reverseStack(st);
         
         insertAtbottom(st,top);
        
      
      
        
    }
};
```

*Generated on: 10/31/2026, 11:00:24 PM*