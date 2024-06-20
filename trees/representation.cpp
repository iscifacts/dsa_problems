//Binary tree represenation in cpp
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};
Node* build_tree(Node* root)
{
    int d;
    cin>>d;
    
    if(d==-1)
   return NULL;
   root=new Node(d);
  // root->data=d;
   
   root->left=build_tree(root->left);
   
   root->right=build_tree(root->right);
   return root;


}
void preOrder(Node* root)
{
    if(root==NULL)
    return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
void InOrder(Node* root)
{
    if(root==NULL)
    return ;
    preOrder(root->left);
    cout<<root->data<<" ";
    preOrder(root->right);
    
}
void postOrder(Node* root)
{
    if(root==NULL)
    return ;
    preOrder(root->left);
    preOrder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node* root=NULL;

    
    // root->left=new Node(2);
    // root->right=new Node(3);
    // root->left->right=new Node(4);
    root=build_tree(root);
    cout<<"PreOrder Traversal"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"InOrder Traversal"<<endl;
    InOrder(root);
    cout<<endl;
    cout<<"PostOrder Traversal"<<endl;
    postOrder(root);
    return 0;
}