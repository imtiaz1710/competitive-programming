#include <bits/stdc++.h>
#define ll long long
#define us unsigned short ll
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
        ll n;
        cin>>n;
        ll a[n+1];
        ll cum[n+1];
        a[0]=0;
        cum[0]=0;
        ll mark[n];
        memset(mark,0,sizeof mark);
        ll mx=0;
        for (ll i = 1; i <= n; i++)
        {
            cin>>a[i];
            if(mx<a[i]) mx=a[i];
            mark[a[i]]++;
            cum[i]=cum[i-1]+a[i];
        }
        bool f=0;
        ll last=mark[1];
        for (ll i = 1; i <=mx; i++)
        {
            if(mark[i]>2 or mark[i]==0 or last<mark[i] )
            {
                f=1;
                break;
            }
            last=mark[i];
        }
        ll res=0;
        ll indx=n-mx;
        if(f)
        {
            res=0;
        }
        else
        {
            if((mx*(mx+1))/2==cum[mx]) res++;
            if((indx*(indx+1))/2==cum[indx]) res++;
            
        }
        if(res==2 and mx!=indx)
        {
            cout << res << endl;
            cout<<mx<<" "<<n-mx<<endl;
            cout<<indx<<" "<<n-indx<<endl;
        }
        else if ((res == 2 and mx == indx) or res==1)
        {
            cout << 1 << endl;
            if ((mx * (mx + 1)) / 2 == cum[mx])
                cout << mx << " " << n - mx << endl;
            else
                cout << indx << " " << n - indx << endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
    }
    
    return 0;
}