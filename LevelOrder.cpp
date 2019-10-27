#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left,*right;
};

void printOrder(node* root, int level);
int height(node* root);
node* CreateNode(int data);

void printLevelOrder(node* root)
{
    int h= height(root);
    for(int i=1;i<=h;i++)
    printOrder(root,i);   
}

void printOrder(node* root, int level) // here printOrder represents PrintLevel
{
    if(root==NULL)
    return;
     if(level==1)
    cout<<root->data;
    else if(level>1)
    {
        printOrder(root->left,level-1);
        printOrder(root->right,level-1);
    }
    
}

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int lheight=height(root->left);
        int rheight=height(root->right);

        if(lheight>rheight)
            return (lheight+1);
        else
        {
            return (rheight+1);
        }
            
    }
}

node* CreateNode(int data)
{
    node* Node= new node();
    Node->data=data;
    Node->left=NULL;
    Node->right=NULL;
    return Node;
}

int main()
{
    node *root = CreateNode(1);  
    root->left = CreateNode(2);  
    root->right = CreateNode(3);  
    root->left->left = CreateNode(4);  
    root->left->right = CreateNode(5);  
  
    cout << "Level Order traversal of binary tree is \n";  
    printLevelOrder(root);  
  
    return 0;
}