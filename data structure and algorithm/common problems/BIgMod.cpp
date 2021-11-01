#include <iostream>
using namespace std;

int mod(int n,int p,int m)
{
    if(p==0) return 1%m;
    int x=mod(n,p/2,m);
    x=(x*x)%m;
    if(p%2==1) x=(x*n)%m;
    return x;
}
int main()
{
    int n,p,m;
    cout<<"please enter number ,power ,and number by which you want to mod: "<<endl;
    cin>>n>>p>>m;
    cout<<"MOD= "<<mod(n,p,m)<<endl;
    return 0;
}
