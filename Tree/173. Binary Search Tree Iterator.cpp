class BSTIterator {
public:
    int curr = 0, pos = 0, store[10001];
    void dfs(TreeNode* root) {
        if (!root) return;
        dfs(root->left);
        store[pos++] = root->val;
        dfs(root->right);
    }
    BSTIterator(TreeNode* root) {
        dfs(root);
    }
    
    int next() {
        return store[curr++];
    }
    
    bool hasNext() {
        return curr < pos;
    }
};
