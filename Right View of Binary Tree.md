## 01. Right View of Binary Tree

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1)

### Problem Description

**Task:** Given the root of a binary Tree. Return the right view of the binary tree. The right view of a Binary Tree is the set of nodes visible when the tree is viewed from the right side.Examples :Input: root = [1, 2, 3, N, N, 4, 5]

#### Examples

##### Example 1

- **Output:**
```text
[1, 3, 5]
```

##### Example 2

- **Input:**
```text
root = [1, 2, 3, 4, N, N, N, N, 5]
```
- **Output:**
```text
[3]
```

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-07-22 01:57:14
- **Status:** Correct
- **Marks:** 2

```cpp
/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
public:
    vector<int> rightView(Node* root) {
        vector<int> ans;

        if (root == NULL)
            return ans;

        // HD -> Node valu
        map<int, int> mp;

        // Node + HD
        queue<pair<Node*, int>> q;

        q.push({root, 0});

        while (!q.empty()) {

            auto it = q.front();
            q.pop();    

             Node* node = it.first;
            int hd = it.second;

            // Store only first node of every HD
           
                mp[hd] = node->data;

            if (node->left)
                q.push({node->left, hd + 1});

            if (node->right)
                q.push({node->right, hd + 1});
        }

        for (auto x : mp)
            ans.push_back(x.second);

        return ans;
        
    }
};
```

*Generated on: 10/31/2026, 11:07:33 PM*