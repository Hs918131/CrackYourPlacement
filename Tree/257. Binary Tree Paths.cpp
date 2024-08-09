class Solution {
public:
    void binaryTreePaths(TreeNode* root,vector<string>& res,string str){
        if(!root->left && !root->right){
            res.push_back(str);
            return;
        }
        
        if(root->left)
            binaryTreePaths(root->left,res,str + "->" + to_string(root->left->val));
        if(root->right)
            binaryTreePaths(root->right,res,str + "->" + to_string(root->right->val));
        
    } 
        
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if (!root) return res;
        
        binaryTreePaths(root,res,to_string(root->val));
        return res;
    }
};
