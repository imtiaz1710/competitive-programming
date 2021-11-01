#include <iostream>
using namespace std;
int x,y,d;
void gcd(int a,int b)
{
    if(b==0)
    {
        d=a;
        x=1;
        y=0;
    }
    else
    {
        gcd(b,a%b);
        int temp=x;       ///x=y1; y=x1-(a/b)*y1;
        x=y;
        y=temp-(a/b)*y;

    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    cout<<"The gcd of and b is:"<<d<<endl;
    cout<<"the coefficient of x and y are:"<<x<<","<<y<<endl;

}
