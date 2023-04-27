void find(Node* root,int &count){
       if (root==NULL){
           return;
       }
       find(root->left,count);
       find(root->right,count);
       if(root->left==NULL && root->right==NULL){
           count++;
       }
       
       
   }
int countLeaves(Node* root)
{
  int count=0;
  find(root,count);
  return count;
}
