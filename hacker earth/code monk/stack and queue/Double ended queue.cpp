#include <iostream>
using namespace std;

void enqueueFront(int a[],int arrsize,int &head,int &tail,int item)
{
    if(tail==arrsize)
    cout<<"Overflow!"<<endl;
    else
    {
        for (int i = tail; i >head ; i--)
        {
           a[i]=a[i-1];
        }
        a[head]=item;
        tail++;
        
    }
    
}

void enqueueEnd(int a[],int arrsize,int &head,int &tail,int item)
{
    if(tail==arrsize)
    {
        cout<<"Overflow!"<<endl;
    }
    else
    {
        a[tail]=item;
        tail++;
    }
    
}

void dequeueFront(int a[],int arrsize,int &head,int &tail)
{
    if(head==tail)
    {
        cout<<"Underflow!"<<endl;
    }
    else
    {
        a[head]=0;
        head++;
    }
    
}

void dequeueEnd(int a[],int arrsize,int &head,int &tail)
{
    if(head==tail)
    {
        cout<<"Underflow!"<<endl;
    }
    else
    {
        a[tail-1]=0;
        tail--;
    }
    
}



int main()
{
    cout<<"Please enter the queue size:"<<endl;
    int t;
    cin>>t;
    int arrsize=t;
    int a[t];
    int n=0;
    int head=0;
    int tail=0;
    int item;
    while (n!=-1)
    {
            cout<<endl;
            cout<<"please enter 1 for insert element in front"<<endl;
            cout<<"please enter 2 for insert element in back"<<endl;
            cout<<"please enter 3 for remove element from front"<<endl;
            cout<<"please enter 4 for remove element from end"<<endl;
            cout<<"please enter 5 for get front element"<<endl;
            cout<<"please enter 6 for get back element"<<endl;
            cout<<"please enter 7 for get queue  size"<<endl;
            cout<<"Please enter 8 to see the queue"<<endl;
            cout<<"please enter -1 for stop programe"<<endl;
            cout<<endl;
            
            cin>>n;
            switch (n)
            {
                case 1:
                    cout<<"Please enter the number:"<<endl;
                    cin>>item;
                    enqueueFront(a,arrsize,head,tail,item);
                    break;
                case 2:
                    cout<<"Please enter the number:"<<endl;
                    cin>>item;
                    enqueueEnd(a,arrsize,head,tail,item);
                    break;
                case 3:
                    dequeueFront(a,arrsize,head,tail);
                    break;
                case 4:
                    dequeueEnd(a,arrsize,head,tail);
                    break;

                case 5:
                    if(head==tail)
                    cout<<"No element"<<endl;
                    else
                    {
                         cout<<a[head]<<endl;
                    }
                    
                   
                    break;
                case 6:
                    if(head==tail)
                    cout<<"No element"<<endl;
                    else
                    {
                        cout<<a[tail-1]; 
                    }
                    
                    break;
                case 7:
                    cout<<tail-head<<endl;
                    break;

                case 8:
                    if(head==tail)
                    cout<<"No element in queue"<<endl;
                    else
                    {
                         for (int i = head; i < tail; i++)
                            {
                                cout<<a[i]<<" ";
                            }
                            cout<<endl;
                    }
                    
                   
                    break;
                    

                
            }
                
    }
            
        
            
            


}