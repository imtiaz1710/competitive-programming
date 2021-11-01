#include <bits/stdc++.h>
typedef struct node Node;
using namespace std;

struct node{
    int data;
    Node* left;
    Node* right;
};

Node* makeNode(int item)
{
        Node* temp=(Node*)malloc(sizeof(Node));
        temp->data=item;
        temp->left=NULL;
        temp->right=NULL;
        return temp;

}

void makeTree(Node* root,int item)
{
    
    if(root->data >= item)
    {
        if(root->left==NULL)
        {
        root->left=makeNode(item);
        return;
        }
        makeTree(root->left,item);
    }
    else
    {
        if(root->right==NULL)
        {
        root->right=makeNode(item);
        return;
        }
        
        makeTree(root->right,item);
    }
    
}

void traverse(Node* root)
{
    if(root==NULL) return;
    
    traverse(root->left);
    traverse(root->right);
    printf("%d\n",root->data);
}
int main(){
    int n;
    cin>>n;
    Node* root;
    root=makeNode(n);
    while(cin>>n)
    {
        makeTree(root,n);
    }
    
    traverse(root);
    
    return 0;
}