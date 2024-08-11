class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        Node* curr=root;
        while(curr!=NULL){
            if(curr->key>=key){
                curr=curr->left;
            }
            else{
                pre=curr;
                curr=curr->right;
            }
        }
        Node* curr2=root;
        while(curr2!=NULL){
            if(curr2->key>key){
                suc=curr2;
                curr2=curr2->left;
            }
            else{
                curr2=curr2->right;
            }
        }
        
    }
};
