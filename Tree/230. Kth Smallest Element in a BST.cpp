class Solution {
public:
    void InOrder(TreeNode* root,vector<int>&ans,int k){
        if(root==NULL) return;
        InOrder(root->left,ans,k);
        ans.push_back(root->val);
        InOrder(root->right,ans,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>ans;
        InOrder(root,ans,k);
        return ans[k-1];
    }
};
