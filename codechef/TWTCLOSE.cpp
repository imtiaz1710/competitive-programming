#include <iostream>
using namespace std;
int main()
{
    int n;
    int k;
    int x,sum=0;
    cin>>n>>k;
    int a[n]={0};
    for(int i=0;i<k;i++)
    {
        string s;
        cin>>s;
        if(s=="CLICK")
        {
            cin>>x;
            if(a[x-1]==0)
                a[x-1]=1;
            else
                a[x-1]=0;
            for(int i=0;i<n;i++)
            {
                if(a[i]==1)
                    sum++;
            }
            cout<<sum<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                a[i]=0;
            }
            cout<<0<<endl;
        }
        sum=0;
    }
}
