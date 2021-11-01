#include <iostream>
using namespace std;

class node
{
public:
	int data;
	node *next;
};
node* start=NULL;
class exe
{
public:
	void createnode()
	{
		node* traverse;

		int n;
		cout<<"enter -1 for stop..."<<endl;

		while(1)
		{   cin>>n;
            if(n==-1)
            break;

		    node* tmp;
			tmp=new node;
			tmp->data=n;
			tmp->next=NULL;
			if(start==NULL)
			{
				start=tmp;
			}
			else
			{
				traverse=start;
				while(traverse->next!=NULL)
				{
					traverse=traverse->next;
				}
				traverse->next=tmp;
			}


		}
	}
	void printnode()
	{
		node* traverse;
		if(start!=NULL)
		{
			traverse=start;
			while(traverse!=NULL)
			{
				cout<<traverse->data<<" ";
				traverse=traverse->next;
			}

			cout<<endl<<endl;
		}
		else
		{
			cout<<"Empty node"<<endl;
		}
	}

};
int main()
{
	exe ob;

	int n;
	do
	{
	cout<<"******************main**********************"<<endl;
	cout<<"Enter 1 for create node..."<<endl;
	cout<<"Enter 2 for print node..."<<endl;
	cout<<"Enter -1 for exit..."<<endl<<endl<<endl;
		cin>>n;
		switch(n)
		{
			case 1:ob.createnode();
			       break;
			case 2:ob.printnode();
			       break;

		}
	}
	while(n!=-1);

	return 0;

}
