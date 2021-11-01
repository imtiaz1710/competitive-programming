#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        int cnt=1;
        for (int i = n; i >= 1 ; i--)
        {
            if(a[i]<=i)
            {
                cnt+=i;
                break;
            }
        }

        cout<<cnt<<endl;
    }
    
}