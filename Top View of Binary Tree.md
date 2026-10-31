## 01. Top View of Binary Tree

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1)

### Problem Description

**Task:** Given a binary tree, task is to return its top view. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top.Return the nodes from the leftmost node to the rightmost node.If multiple nodes overlap at the same horizontal position, only the topmost (closest to the root) node is included in the view. Examples:Input: root = [1, 2, 3]Output: [2, 1, 3]Explanation: The Green colored nodes represents the top view in the below Binary tree. Input: root = [10, 20, 30, 40, 60, 90, 100]Output: [40, 20, 10, 30, 100]Explanation: The Green colored nodes represents the top view in the below Binary tree.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (1)

#### Solution 1 (C++)

- **Submitted:** 2026-07-22 01:07:17
- **Status:** Correct
- **Marks:** 4

```cpp
/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {

        vector<int> ans;

        if (root == NULL)
            return ans;

        // HD -> Node value
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
            if (mp.find(hd) == mp.end())
                mp[hd] = node->data;

            if (node->left)
                q.push({node->left, hd - 1});

            if (node->right)
                q.push({node->right, hd + 1});
        }

        for (auto x : mp)
            ans.push_back(x.second);

        return ans;
    }
};
        // code here
```

*Generated on: 10/31/2026, 11:09:09 PM*