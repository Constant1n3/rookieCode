#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int x)
{
    Node* tmp=new Node();
    tmp->data=x;
    tmp->right=NULL;
    tmp->left=NULL;
    return tmp;
}
void mir(Node* root)
{
    if(root==NULL)
    return;
    
    mir(root->left);
    mir(root->right);
    Node* temp=root->left;
    root->left=root->right;
    root->right=temp;
}

void printInOrder(Node* root)
{
    if(root!=NULL)
    {
 printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
    }
   
}

int main() 
{ 
    struct Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5);  
      
    /* Print inorder traversal of the input tree */
    cout << "Inorder traversal of the constructed"
         << " tree is" << endl; 
    printInOrder(root); 
      
    /* Convert tree to its mirror */
    mir(root);  
      
    /* Print inorder traversal of the mirror tree */
    cout << "\nInorder traversal of the mirror tree"
         << " is \n";  
    printInOrder(root); 
      
    return 0;  
}