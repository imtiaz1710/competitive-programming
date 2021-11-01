#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    int cum_sum[n];
    cin>>a[0];
    cum_sum[0]=a[0];
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        cum_sum[i]=cum_sum[i-1]+a[i];
    }
    int q;
    cin>>q;
    int ans;
    for (int i = 0; i < q; i++)
    {
        int tmp;
        cin>>tmp;
        int l=0,r=n-1;
        while (l<=r)
        {
            int mid=(l+r)/2;
            if(cum_sum[mid]<tmp)
            {
               l=mid+1;
                
            }
            else
            {
                r=mid-1;
                ans=mid;
            }
            
        }
        cout<<ans+1<<endl;
        
    }
    
    return 0;
}