/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;

        if (root == NULL)
            return ans;

        // HD -> Node valu
        map<int, int> mp;

        // Node + HD
        queue<pair<TreeNode*, int>> q;

        q.push({root, 0});

        while (!q.empty()) {

            auto it = q.front();
            q.pop();    

             TreeNode* node = it.first;
            int hd = it.second;

            // Store only first node of every HD
           
                mp[hd] = node->val;

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