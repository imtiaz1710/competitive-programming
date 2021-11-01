#include <iostream>
using namespace std;
class linklist
{
private:
    int i;
public:
    void setval(int x)
    {
        i=x;
    }
    int getval()
    {
        return i;
    }
    linklist *next;
};
linklist *head;
linklist *newelement;
linklist *tail;
void setnull(){head=newelement=tail=NULL;}
void add(int i)
{
    newelement=new linklist;
    newelement->setval(i);
    if(head!=NULL)
    {
        tail->next=newelement;
    }
    else
    {
        head=newelement;
    }
    tail=newelement;
    tail->next=NULL;
}
void display()
{
    linklist *current;
    current=head;
    if(head==NULL)
        cout<<"NULL"<<endl;
    while(current!=NULL)
    {
        cout<<current->getval()<<endl;
        current=current->next;
    }
}

void searchelement(int i)
{
    linklist *s;
    s=head;
    int c=0;
    while(s!=NULL)
    {
        if(s->getval()==i)
        {
            c++;
        }
        s=s->next;
    }
    cout<<"total "<<i<<"="<<c<<endl;
}
int main()
{
   setnull();
   int n;
   int j;
   cout<<"please input total numbers of node"<<endl;
   cin>>n;
   cout<<"please enter the data"<<endl;
   for(int i=0;i<n;i++)
   {

     cin>>j;
     add(j);
   }

   display();

   searchelement(0);
   delete head,tail,newelement;
}
