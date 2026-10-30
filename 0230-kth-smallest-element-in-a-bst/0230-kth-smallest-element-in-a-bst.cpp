
class Solution {
public:
    void inorder(TreeNode* root,int k, int & ans,int & count){
        if(root==nullptr) return ; 
        inorder(root->left, k, ans,count);
        if(count==k-1){
            ans = root->val;
        }
        
        count++;
        inorder(root->right,k,ans,count);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans = -1;
        int count = 0;
        inorder(root,k,ans,count);
        return ans;
    }
};