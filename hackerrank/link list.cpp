#include <iostream>
#include <cstddef>
using namespace std;
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:
      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node* tmp;
          Node* traverse;


          tmp=new Node(data);
          if(head==NULL)
          {
              head=tmp;

          }
          else
          {
             traverse=head;
              while(traverse->next!=NULL)
              {
                  traverse=traverse->next;
              }

            traverse->next=tmp;

          }


          return head;
      }


    void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }
	mylist.display(head);

}
