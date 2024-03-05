#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {

        data=val;
        left=right=NULL;
    }
};
int depth(Node* root)
{
    if(root==NULL)
    return 0;
    int lh=depth(root->left);
    int rh=depth(root->right);
   return  1+max(lh,rh);
   // return ans;
}
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
  //  root->left=;
    root->left->right=new Node(3);
    root->right=new Node(5);
    root->right->left=new Node(10);
    int d=depth(root);
    cout<<" Depth of this binary tree is : "<<d<<endl;
}