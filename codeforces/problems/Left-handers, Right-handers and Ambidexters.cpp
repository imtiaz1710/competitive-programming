#include<iostream>
using namespace std;
int main()
{
    int n,l,m;
    cin>>n>>l>>m;
    while(n!=l||m!=0)
    {
        if(m==0)
            break;
        if(n==l)
        {
            n++;
            m--;
            continue;
        }
        if(n<l )
        {
            n++;
            m--;
        }
        else
        {
            l++;
            m--;
        }
    }
    if(n<l)
        cout<<n*2<<endl;
    else
        cout<<l*2<<endl;

        return 0;


}
