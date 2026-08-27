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
    TreeNode* prev = NULL;
    int ans = INT_MAX;
    void minDist(TreeNode* root) {
        if (root == NULL) {
            return;
        }
          minDist(root->left);
       if (prev != NULL) {
            ans = min(ans, root->val - prev->val);
        }
        prev = root;
        minDist(root->right);
    }
        int minDiffInBST(TreeNode* root) {
        minDist(root);
        return ans;
    }
};