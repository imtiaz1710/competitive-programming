#include <iostream>
using namespace std;
int gcd(int a,int b)
{
    int temp,t;
    if(a<b)
    {
        temp=b;
        b=a;
        a=temp;
    }
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;

    }
    return a;
}
int main()
{
    int n;
    cin>>n; int x,y;
    int a[n];
    int i;
    for(int j=0;j<n;j++)
        cin>>a[j];
        x=a[0];y=a[1];
        i=1;
    while(i!=n)
    {
       i++;
       x=gcd(x,y);
       y=a[i];

    }
    cout<<x<<endl;


}


