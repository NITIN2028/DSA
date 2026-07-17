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
    void preorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) {
            ans.push_back(-100001);   // NULL marker
            return;
        }

        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> tree1;
        vector<int> tree2;

        preorder(p, tree1);
        preorder(q, tree2);

        return tree1 == tree2;
    }
};