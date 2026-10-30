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
    int helper(TreeNode* root, int& ans){
        if(root==nullptr) return 0;
        int left_root = helper(root->left, ans);
        int right_root = helper(root->right, ans);
        ans = max(ans, left_root+right_root);
        return 1+max(left_root, right_root);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans = INT_MIN;
        helper(root, ans);
        return ans;
    }
};