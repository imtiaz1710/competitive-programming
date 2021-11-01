#include <stdio.h>
#include<iostream>
using namespace std;
int x,y,d;
void gcd(int a,int b)
{
   if(a%b==0)
    {
    d=b;
    x=0;
    y=1;
    }
   else
   {
       gcd(b,a%b);
       int temp=x;
       x=y;
       y=temp-(a/b)*y;
   }
}
int main()
{
    int a,m;
    cin>>a>>m;
    gcd(a,m);
    x=(x%m+m)%m;
    cout<<"The modular inverse is:"<<x<<endl;
}
