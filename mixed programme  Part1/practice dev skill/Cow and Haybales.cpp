#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int d,n;
        cin>>n>>d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n==1)
        {
            cout<<a[0]<<endl;
            continue;
        }
        int mx=0;
        int ans=a[0];
        bool f=0;
        int sum=0;
        int total=0;
        for (int i = 1; i < n; i++)
        {
            sum+=a[i]*i;
            total+=a[i];
            if(sum>=d)
            {
                sum-=a[i]*i;
                total-=a[i];
                while ((sum+a[i]*i)>d)
                {
                    a[i]--;
                }
                sum+=a[i]*i;
                total+=a[i];
                 ans+=total;
                cout<<ans<<endl;
                f=1;
                break;
            }
        }
        if(!f)
        {
            cout<<ans+total<<endl;
        }
        
    }
    
    return 0;
}