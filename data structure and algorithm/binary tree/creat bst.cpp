#include <bits/stdc++.h>
typedef struct node Node;
using namespace std;

struct node{
    int data;
    Node* left;
    Node* right;
};
Node *p;
int q;
Node* makeNode(int item)
{
        Node* temp=(Node*)malloc(sizeof(Node));
        temp->data=item;
        temp->left=NULL;
        temp->right=NULL;
        if(item==q) p=temp;
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
    printf("%d\n",root->data);
    traverse(root->left);
    traverse(root->right);
    
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cin>>q;
    Node* root;
    root=makeNode(a[0]);
    for (int i = 1; i < n; i++)
    {
        makeTree(root,a[i]);
    }
    //traverse(root);
    
    
    traverse(p);
    return 0;
}