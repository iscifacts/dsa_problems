#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
bool is_identical(node* root1 ,node* root2)
{
    if(root1==NULL || root2==NULL)
    return root1==root2;
    return (root1->data==root2->data)&&(is_identical(root1->left,root2->left))&& (is_identical(root1->right , root2->right));
}
int main()
{
  node* root1=new node(0);
  node* root2=new node(0);
  //tree1
  root1->left=new node(1);
  root1->right=new node(2);
  root1->left->right=new node(3);
  root1->right->left=new node(4);
//tree2
  root2->left=new node(1);
  root2->right=new node(2);
  root2->left->right=new node(3);
  root2->right->left=new node(5);
  bool ans=is_identical(root1,root2);
  cout<<"Trees are identical "<<ans<<endl;
  return 0;
}