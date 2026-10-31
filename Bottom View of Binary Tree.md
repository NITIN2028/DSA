## 01. Bottom View of Binary Tree

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1)

### Problem Description

**Task:** Given a binary tree, and your task is to return its bottom view. The bottom view of a binary tree is the set of nodes visible when the tree is viewed from the bottom.Note: If there are multiple bottom-most nodes for a horizontal distance from the root, then the latter one in the level order traversal is considered.Examples :Input: root = [1, 2, 3, 4, 5, N, 6] Output: [4, 2, 5, 3, 6]Explanation: The Green nodes represent the bottom view of below binary tree. Input: root = [20, 8, 22, 5, 3, 4, 25, N, N, 10, 14, N, N, 28, N] Output: [5, 10, 4, 28, 25]Explanation: The Green nodes represent the bottom view of below binary tree.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(n)

### Accepted Solutions (2)

#### Solution 1 (C++)

- **Submitted:** 2026-07-22 01:37:50
- **Status:** Correct
- **Marks:** 0

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
    vector<int> bottomView(Node *root) {

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

#### Solution 2 (C++)

- **Submitted:** 2026-07-22 01:28:38
- **Status:** Correct
- **Marks:** 4

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
    vector<int> bottomView(Node *root) {

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

*Generated on: 10/31/2026, 11:08:05 PM*