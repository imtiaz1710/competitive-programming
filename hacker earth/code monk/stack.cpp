#include <iostream>
using namespace std;
int top=-1;
int n=2;
int *stk;
int* push(int *stk,int x)
{
    if(top==n-1)
    {
        int tmp[n];
        for(int i=0;i<n;i++)
            tmp[i]=stk[i];
       n+=2;
       stk=new int[n];
       for(int i=0;i<=top;i++)
            stk[i]=tmp[i];

    }
        stk[++top]=x;
        return stk;
}
bool isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void pop()
{
    if(isempty())
        cout<<"ERROR"<<endl;
    else
        top--;
}

int main()
{

    string s;
    int x;
    stk=new int[n];
    while(1)
    {
        cin>>s;
        if(s=="push"){
            cin>>x;
            stk=push(stk,x);
        }
        else if(s=="pop")
            pop();
        else
            cout<<"You pressed an invalid key!"<<endl;
        if(top==-1)
            cout<<"nothing to print"<<endl;
        else
            for(int i=0;i<=top;i++)
            cout<<stk[i]<<"  ";

    }
}
