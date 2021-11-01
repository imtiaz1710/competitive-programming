#include <bits/stdc++.h>
typedef struct node Node;
using  namespace std;
struct node
{
	int data;
	Node* left;
	Node* right;
};

Node* createNode(int item)
{
	Node* tmp1;
	tmp1=(Node*)malloc(sizeof(Node));
	//if(tmp1==NULL) printf("cant");
	tmp1->data=item;
	tmp1->left=NULL;
	tmp1->right=NULL;
	return tmp1;
}
void addNode(Node* root,string s,int d)
{
	Node* tmp=root;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='L')
		{
			if(tmp->left==NULL)
			tmp->left=createNode(0);

			tmp=tmp->left;
		}
		else
		{
			if(tmp->right==NULL)
			tmp->right=createNode(0);
			tmp=tmp->right;
		}

	}
	tmp->data=d;


}
int height(Node* root)      //rl=root left
{
	if(root==NULL)
	return 0;
    else
    {
        int l=height(root->left);
	    int r=height(root->right);
	    if(l>r) return (l+1);
	    else return (r+1);
    }


}

int diametre(Node* root)
{
	if(root==NULL) return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	int ld=diametre(root->left);
	int rd=diametre(root->right);
	return max(lh+rh+1,max(ld,rd));
}

//void traverseTree(Node *root)
//{
//    printf("%d\n",root->data);
//    if(root->left!=NULL)
//    {
//        traverseTree(root->left);
//    }
//    if(root->right!=NULL)
//    {
//        traverseTree(root->right);
//    }
//
//}

int main()
{
	int n;
	int rv; //root value
	cin>>n>>rv;
	Node* root=createNode(rv);
	for (int i = 0; i < n-1; i++)
	{
		string s;
		int d;
		cin>>s>>d;
		addNode(root,s,d);

	}
	cout<<diametre(root)<<endl;






}
