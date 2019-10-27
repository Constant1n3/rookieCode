#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

};
Node*t1,*t2;
Node* getNode(int data)
{
    Node* temp= new Node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

Node* f(Node* root,int ans)
{
    
    if(root->left->left==NULL&&root->left->right==NULL)
    {
       
       
        if(ans>root->data)
        {
            return t2;
        }
        else
        {
            t1=root;
            return t1;
        }
        
        
    }
    else 
    {
        t2=f(root->left);
    }
    if(root->right->right==NULL&&root->right->left==NULL)
    {
        return t2;
    }
    else
    {
        return f(root->right,ans);
    }
    

}