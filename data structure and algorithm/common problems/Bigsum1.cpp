///Mod of 1+a^1+a^2+a^3+....series;
#include <iostream>
using namespace std;
int bigsum(int a,int p,int m)
{
    int sum=((a%m)*(a%m))%m;
    for(int i=0;i<p/2-2;i++)
    {
        sum=(sum%m+(sum%m*sum%m)%m)%m;
    }
    sum=(sum+1)%m;
    sum=((sum*(a%m))%m+sum)%m;
    if(p%2==1)
        sum=(1+sum*(a%m))%m;
    return sum;
}
int main()
{
    while(1){
    cout<<"please give the number of term of 1+a+a^2+a^3.... series :"<<endl;
    int p;
    cin>>p;
    cout<<"please give the value of 'a :'"<<endl;
    int a;
    cin>>a;
    cout<<"please give the value of mod: "<<endl;
    int m;
    cin>>m;
    cout<<"mod :"<<bigsum(a,p,m)<<endl;
    }
    return 0;
}
