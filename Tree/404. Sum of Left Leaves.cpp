class Solution {
public:
    
    int solve(TreeNode* curr, bool isLeft) {
        if(!curr) {
            return 0;
        }
        
        if(!curr->left && !curr->right && isLeft) {
            return curr->val;
        }
        
        return solve(curr->left, true) + solve(curr->right, false);
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        return solve(root, false);
    }
};
