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
void zig_zag(node* root)
{
    vector<vector<int>>ans;
    if(root==NULL)
    cout<<"0"<<endl;
    queue<node*>q;
    q.push(root);
    bool flag=1;
    while(!q.empty())
    {
        int m=q.size();
        vector<int>temp(m);
        for(int i=0;i<m;i++)
        {
           node* n=q.front();
           q.pop();
           int idx;
           if(flag)
           idx=i;
           else
           idx=m-i-1;
           temp[idx]=n->data;
        if(n->left)
        q.push(n->left);
        if(n->right)
        q.push(n->right);
        }
        ans.push_back(temp);
        flag=!flag;

    }
for(int i=0;i<ans.size();i++)
{
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    zig_zag(root);
    return 0;
}