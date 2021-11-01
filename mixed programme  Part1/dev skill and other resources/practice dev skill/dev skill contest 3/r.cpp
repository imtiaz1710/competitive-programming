#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll tmp=1;
        int idx=0;
        int cnt=0;
        while (idx!=n)
        {
            
            if(tmp==a[idx])
            {
                cnt++;
                idx++;
                continue;
            }
            tmp*=k;
            while (tmp>a[idx])
            {
                idx++;
                if(tmp==a[idx])
                {
                    cnt++;
                    idx++;
                    break;
                }
            }
            

        }
        
        cout<<cnt<<endl;
        
    }
    
    return 0;
}