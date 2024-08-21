class Solution {
  public:
    Node *helper(int pre[],int &n,int &index,int l,int h)
    {
        if(index >= n) return NULL;
        
        if(l > pre[index] or pre[index] > h)
        {
            return NULL;
        }
        
        Node *root= newNode(pre[index++]);
        root->left = helper(pre,n,index,l,root->data);
        root->right = helper(pre,n,index,root->data,h);
        
        return root;
    }
    Node* Bst(int pre[], int n) {
       
        if(n ==0) return NULL;
        int i=0;
        return helper(pre,n,i,0,INT_MAX);
    }
};
