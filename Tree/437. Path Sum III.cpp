class Solution {
public:
    int pathcount;
    void getsum(TreeNode* root, int sum){
        if(!root)return;
        if(root->val==sum){
            pathcount++;
        }
        getsum(root->left,sum-root->val);
        getsum(root->right,sum-root->val);
    }
    int pathSum(TreeNode* root, int& sum) {
        if(root){
            getsum(root,sum);
            pathSum(root->left,sum);
            pathSum(root->right,sum);
        }
        return pathcount;
    }
};
