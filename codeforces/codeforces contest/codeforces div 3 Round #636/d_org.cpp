#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        map <int,int> m;
        int prex[2*k+2];
        memset(prex,0,sizeof prex);
        for (int i = 1; i <= n/2; i++)
        {
            m[a[i]+a[n-i+1]]++;
        }

        for (int i = 1; i <= n/2; i++)
        {
            int l=min(a[i],a[n-i+1]);
            int r=max(a[i],a[n-i+1]);
            prex[l+1]++;
            prex[r+k+1]--;
        }
        for (int i = 1; i <= 2*k; i++)
        {
            prex[i]=prex[i-1]+prex[i];
        }
  
        int ans=n+100;
        for (int i = 2; i <= 2*k; i++)
        {
            int one=max(0,prex[i]-m[i]);
            int two=n/2-m[i]-one;
            ans=min(ans,one+two*2);
        }
     
        cout<<ans<<endl;
    }
    
    return 0;
}