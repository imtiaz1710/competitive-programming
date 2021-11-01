#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll a[n+1];
    ll psum[n+1];
    psum[0]=0;
    for (ll i = 1; i <= n; i++)
    {
        cin>>a[i];
        psum[i]=psum[i-1]+a[i];
        //cout<<psum[i]<<endl;
    }
    map<ll,ll> m;
    ll bad=0;
    ll last=1;
    m[0]=-1;
    for (ll i = 1; i <= n; i++)
    {
            if(m[psum[i]]==-1 and last==1)
            {
                bad+=n-i+1;
                m[psum[i]]=i;
                //cout << bad << endl;
                last=2;
            }
            else 
            {
                //cout << m[psum[i]]<<" "<<last<< endl;
                if(m[psum[i]]+1>=last and m[psum[i]])
                {
                    bad += (m[psum[i]]+1 - last) + (n - i) + 1 + (m[psum[i]]+1 - last) * (n - i);
                    last = m[psum[i]] + 2;
                }
               
                m[psum[i]] = i;
            }
    }
    ll total=(n*(n+1))/2;
    ll good=total-bad;
    cout<<good<<endl;
    return 0;
}