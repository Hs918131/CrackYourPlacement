class Solution{
    public:
    int ans = 0;
    
    int f(Node* root, int a, int b, int i = 0){
        if(root == NULL) return 0;
        int l = f(root->left,a,b,i+1);
        int r = f(root->right,a,b,i+1);
        
        if((root->data == a || root->data == b) && (l||r)){
            ans = abs((max(l,r) - i));
            return (max(l,r) - i);
        }
        if(l && r){
            ans = abs(l+r - 2*i);
            return ans;
        }
        if(max(l,r)) return max(l,r);
        
        if(root->data == a) return i;
        else if(root->data == b) return i;
        else return 0;
        
    }
    
    int findDist(Node* root, int a, int b) {
        // Your code here
        f(root,a,b);
        return ans;
        
    }
};
