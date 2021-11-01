#include <bits/stdc++.h>
typedef struct node Node;
using namespace std;

struct node {
    int data;
    Node *left;
	Node *right;
};
Node* creatNode(int item)
{
	Node* tmp=(Node*)malloc(sizeof(Node));
	tmp->data=item;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}
void leftnode(Node* p,Node* c)
{
	p->left=c;
}
void rightnode(Node* p,Node* c)
{
	p->right=c;
}
Node* make_a_sample_tree()
{
	Node* five=creatNode(5);
	Node* one=creatNode(1);
	Node* seven=creatNode(7);
	leftnode(five,one) ;
	rightnode(five,seven);
	Node* two=creatNode(2);
	Node* eight=creatNode(8);
	leftnode(one,two) ;
	rightnode(one,eight);
	return five;
}
int main(){
	Node* root=make_a_sample_tree();
	printf("The data of root is:%d",root->data);

	return 0;
}
