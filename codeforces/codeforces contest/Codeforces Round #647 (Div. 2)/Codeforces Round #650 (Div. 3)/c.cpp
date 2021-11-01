#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        int pcount=0;
        for (ll i = 0; i < n; i++)
        {
            scanf("%1lld",&a[i]);
            if(a[i]==1) pcount++;
            //cout<<a[i]<<endl;
        }
        ll range=k*2+1;
        ll fst=k+1;
        ll st;
        ll cnt = 0;
        for (ll i = 0; i <= k; i++)
        {
            if(a[i]==1) 
            {
               // st=i;
                //cnt--;
                break;
            }
            st=0;
        }
        a[st]=1;
       
        for (ll i = st; i < n; i++)
        {
            if(a[i]==1)
            {
                ll f=0;
                for (ll j = i+1; j <= range+i ; j++)
                {
                    if(a[j]==1 or j>=n) 
                    {
                        // if(j==n and j-i-1>=fst)
                        // {
                        //     cnt++;
                        // }
                        f=1;
                        i=j-1;
                        break;
                    }
                }
                if(f==0)
                {
                    a[i+fst]=1;
                    i+=fst-1;
                 //   cout<<i<<endl;
                   // cnt++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
          //  cout<<a[i];
            if(a[i]==1) cnt++;
        }
        //cout<<endl;   
        cout<<cnt-pcount<<endl;

    }
    
    return 0;
}