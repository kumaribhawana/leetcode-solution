/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    void solve(TreeNode* root, int parent, int grandparent) {
        if (root == NULL) {
            return;
        }
        if (grandparent % 2 == 0) {
            ans += root->val;
        }
        solve(root->left, root->val, parent);
        solve(root->right, root->val, parent);
    }

    int sumEvenGrandparent(TreeNode* root) {
        solve(root, 1, 1);
        return ans;
    }
};