#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
vector <ll> a;
int bsearch_up(int l,int r,ll ele)
{
    int mid,ans=0;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>=ele)
        {
           r=mid-1;
           ans=mid;
            
        }
        else
        {
            l=mid+1;
        }
        
    }
    return ans;
    
}

int bsearch_low(int l,int r,ll ele)
{
    int mid,ans=0;
    while (l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]<=ele)
        {
            l=mid+1;
            ans=mid;
        }
        else
        {
            r=mid-1;
        }
        
    }
    return ans;
    
}

int main(){
    fin,fout;
    int t;
    scanf("%d",&t);
    int tc=0;
    while (t--)
    {
        int n,q;
        scanf("%d%d",&n,&q);
        a.clear();
        a.resize(n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        printf("Case %d:\n\n",++tc);
        for (int i = 0; i < q; i++)
        {
            ll x,y;
            scanf("%lld%lld",&x,&y);
            int l=bsearch_up(0,n-1,x);
            int r=bsearch_low(0,n-1,y);
            printf("%d\n\n",r-l+1);
        }
        
        
    }
    
    return 0;
}