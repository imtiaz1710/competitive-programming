#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int m;
        scanf("%d",&n);
        int s[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        sort(s,s+n);

        for(int i=0;i<n-1;i++)
        {
            if(i==0) m=s[i+1]-s[i];
            else if(s[i+1]-s[i]<m)
             m=s[i+1]-s[i];
        }
        printf("%d\n",m);
    }
    return 0;
}
