#include <bits/stdc++.h>
typedef struct node Node;
using namespace std;
struct node
{
    int data;
    Node* left;
    Node* right;
};
Node* creatNode(int item)
{
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=item;
    temp->right=NULL;
    temp->left=NULL;
    return temp;
}
void makeTree(Node* root,int item)
{
    if(root->data >= item)
    {
        if(root->left==NULL)
        {
            root->left=creatNode(item);
            return;
        }
        makeTree(root->left,item);
        
    }
    else
    {
        if(root->right==NULL)
        {
            root->right=creatNode(item);
            return;
        }
        makeTree(root->right,item);
    }
}
int height(Node* root)
{
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    if(l<r) return ++r;
    else return ++l;
}
int main(){
        int n;
        cin>>n;
        int a[n];
        cin>>a[0];
        Node* root=creatNode(a[0]);
        for (int i = 1; i < n; i++)
        {
            cin>>a[i];
            makeTree(root,a[i]);
        }
        int h=height(root);
        cout<<h<<endl;
        
        
    
    
    return 0;
}