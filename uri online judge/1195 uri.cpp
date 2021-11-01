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
void pretraverse(Node* root)
{
    if(root==NULL) return;
    
    cout<<" "<<root->data;
    
    
    pretraverse(root->left);
    pretraverse(root->right);
}

void posttraverse(Node* root)
{
    if(root==NULL) return;
    
    posttraverse(root->left);
    posttraverse(root->right);
    cout<<" "<<root->data;
    
}
void intraverse(Node* root)
{
    if(root==NULL) return;
    
    intraverse(root->left);
    cout<<" "<<root->data;
    intraverse(root->right);
    
}

int main(){
    int t;
    cin>>t;
    int c=0;
    while (t--)
    {
        Node* root;
        int n;
        cin>>n;
        int a[n];
        cin>>a[0];
        root=creatNode(a[0]);
        for (int i = 1; i < n; i++)
        {
            cin>>a[i];
            makeTree(root,a[i]);
        }
        
        cout<<"Case "<<++c<<":"<<endl;
        cout<<"Pre.:";
        pretraverse(root);
        cout<<endl;
        cout<<"In..:";
        intraverse(root);
        cout<<endl;
        cout<<"Post:";
        posttraverse(root);
        cout<<endl<<endl;
    }
    
    return 0;
}