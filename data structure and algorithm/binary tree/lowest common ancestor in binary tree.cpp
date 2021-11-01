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
Node* lca(Node* root,int a,int b)
{
    //if(root==NULL) return NULL;
    if(root->data >a && root->data >b)
    return lca(root->left,a,b);
    else if(root->data <a && root->data <b)
    return lca(root->right,a,b);
    
        return root;
    
    
    
}

// void traverse(Node* root)
// {
//     if(root==NULL) return;
    
//     traverse(root->left);
//     traverse(root->right);
//     printf("%d ",root->data);
// }
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Node* root;
    root=makeNode(a[0]);
    for (int i = 1; i < n; i++)
    {
        makeTree(root,a[i]);
    }
    int x,y;
    cin>>x>>y;
    Node* tmp=lca(root,x,y);
    cout<<tmp->data<<endl;
    //traverse(root);
    
    return 0;
}