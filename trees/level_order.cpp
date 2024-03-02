#include<bits/stdc++.h>
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

void LevelOrderTraversal(Node* root)
{
   vector<vector<int>>ans;
    if(root==NULL)
    cout<<"0"<<endl;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {       
            Node* node=q.front();
            cout<<node->data<<" ";
            q.pop();
            if(node->left!=NULL)
            q.push(node->left);
            if(node->right!=NULL)
            q.push(node->right);
    }
       
}

int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->left->left=new Node(5);
    LevelOrderTraversal(root);
    return 0;
}