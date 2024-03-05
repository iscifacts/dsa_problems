//check for balanced binary tree
// A balanced binary tree is the one in which height(left)-height(right)<=1
// there are two approaches 1. brute force 2. optimal approach
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
//brute force approach
int height(node* root)
{
    if(root==NULL)
    return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    return 1 + max(lh,rh);
}
bool check_brute(node* root)
{
    if(root==NULL)
    return true;
    int lh=height(root->left);
    int rh=height(root->right);
    if(abs(rh-lh)>1)
    return false;
    bool left=check_brute(root->left);
    bool right=check_brute(root->right);
    if(!left || !right)
    return false;
    return true;

}
// optimal approach
int check_optimal(node* root)
{
    if(root==NULL)
    return 0;
    int lh=check_optimal(root->left);
    int rh=check_optimal(root->right);
    if(lh==-1 || rh==-1)
    return -1;
    else if(abs(lh-rh)>1)
    return -1;
    else
    return max(lh,rh)+1;

}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
   // root->left->right=new node(4);
    // root->left->left=new node(5);
    // root->left->left->left=new node(6);

    bool ans=check_brute(root);
    cout<<"From Brute force "<<ans<<endl;
    bool ans2=check_optimal(root);
    cout<<"From Optimal approach"<<endl;
    if(ans2!=-1)
    cout<<"1"<<endl;
    else
    cout<<"0"<<endl;
    
}
