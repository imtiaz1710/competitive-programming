#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        while(n)
        {
           n=n&(n-1);
           c++;
        }
        cout<<c<<endl;
    }
}
