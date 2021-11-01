#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll t;
    cin>>t;
    ll pa=0;
    ll pb=0;
    ll cnt=1;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
    
        ll mx=max(pa,pb);
        ll mn=min(a,b);
        if(mn>=mx)
        {
            cnt += mn - mx;
            if (pa != pb)
                cnt++;
        } 
        pa=a;
        pb=b;
    }

    cout<<cnt<<endl;
    return 0;
}