//solved

#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int t;
    cin>>t;
    while (t--)
    {
        int a[12]={0};
        int n;
        cin>>n;
        while (n--)
        {
            int x,y;
            cin>>x>>y;
            if(a[x]<y) a[x]=y;
        }
        int sum=0;
        for (int i = 1; i <= 8; i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
       
    }
    
    return 0;
}