public:
    void check(Node *root,int low,int upp,bool &val)
    {
        if(!root->left && !root->right)
        {
            //check left side first
            if((root->data-low)-1==0)
            {
                //check for right
                if((upp-root->data)-1==0)
                {
                    val=1;
                    return;
                }
            }
            
            return;
        }
        if(root->left) check(root->left,low,root->data,val);
        if(root->right) check(root->right,root->data,upp,val);
        
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
        bool val;
        check(root,0,INT_MAX,val);
        
        return val;
    }
};
