#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    while(cin>>n)
    {

        int sum=n;
       if(n%3!=0)
       {
           n+=n%3;
       }

       while(n!=1)
       {
            n=n/3;
           sum+=n;

       }
       cout<<sum<<endl;

    }
}
