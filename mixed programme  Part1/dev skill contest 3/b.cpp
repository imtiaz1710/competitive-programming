#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool is_possible(int step,int n,int dif[])
{
    for (int i = 0; i < n; i++)
    {
        if(dif[i]>step)
        return false;
        if(dif[i]==step)
        step--;
        
    }
    return true;
    
}

int main(){
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int dif[n];
        int tmp=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            dif[i]=a[i]-tmp;
            tmp=a[i];
        }
        
        int l=0,r=a[n-1];
        int ans=0;
        while (l<=r)
        {
            int  mid=(l+r)/2;
            if(is_possible(mid,n,dif))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
        }
        printf("Case %d: %d\n",++tc,ans);
    }
    
    return 0;
}