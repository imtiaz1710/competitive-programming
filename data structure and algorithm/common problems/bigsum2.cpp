///Mod of 1+2a^1+3a^2+4a^3+....series;
#include <iostream>
using namespace std;
int bigsum(int a,int p,int m)
{
    int pw=((a%m)*(a%m))%m;
    int t1=3,t2=2;
    int sum1=(1+(t1%m)*(pw%m))%m;
    int sum2=(1+(t2%m)*(pw%m))%m;
    for(int i=0;i<p/2-2;i++)
    {
        pw=(pw*(a%m)*(a%m))%m;
        t1=t1+2;
        t2=t2+1;
        sum1=(sum1+((t1%m)*pw)%m)%m;
        sum2=(sum2+((t2%m)*pw)%m)%m;

    }
    sum2=(sum2*(((2%m)*(a%m))%m))%m;
    if(p%2==1)
    {
        sum1=(sum1+((t1+2)%m)*((pw*(a%m)*(a%m))%m))%m;
    }
    return (sum1+sum2)%m;

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

