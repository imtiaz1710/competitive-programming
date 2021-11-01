#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int cs=0;
    while (t--)
    {
        
        int n;
        cin>>n;
        int a[n];
        int max=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(max<a[i])
            max=a[i];
        }
        printf("Case %d: %d\n",++cs,max);
        
    }
    

    return 0;
}