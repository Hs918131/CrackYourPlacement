void fun(struct Node* root,vector<int>&v){
    if(!root){
        return ;
    }
    fun(root->left,v);
    v.push_back(root->data);
    fun(root->right,v);
}
float findMedian(struct Node *root)

{      
      vector<int>v;
      fun(root,v);
      float ans;
      int n=v.size();
      if(n%2==0){
          ans=(float)(v[n/2]+v[(n/2)-1])/2;
          return ans;
      }
      ans=(float)v[n/2];
      return ans;
}

