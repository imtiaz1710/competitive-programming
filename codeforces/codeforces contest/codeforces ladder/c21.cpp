#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,step;
    cin>>n>>step;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll j=1;
    ll res=a[n/2];
    ll add=0;
    bool f = 0;
    for (ll i = n/2; i < n-1; i++)
    {
        ll gap=a[i+1]-a[i];
                                   
        if(add+gap*j<=step)
        {
            add+=gap*j;
            res+=gap;
            
        }
        else
        {
           
            f=1;
            step -= add;
            res+=(step/j);
            step=0;
            break;
        }

        j++;
    }
    if(step) step-=add;
  //  cout << res << endl;
    ll total_ele=n-n/2;
    if(!f)
    { 
        res+=step/total_ele;
    
    }
    cout<<res<<endl;
    
    return 0;
}

// 5 5
// 1 1 1 1 2

