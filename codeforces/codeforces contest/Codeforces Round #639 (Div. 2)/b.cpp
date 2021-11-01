#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
vector <ll> v;
void build()
{
    ll n=2;
    v.push_back(2);
    ll t=2;
    while (n<=1000000000)
    {
        v.push_back(n);
        ll base=t*2;
        ll rem=(((t-1)*t)/2)*3;
        n=base+rem;
        t++;
    }
    
}

int main(){

    build();
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        ll cnt=0;
        while (n>=2)
        {
            cnt++;
            ll i=0;
            while (i < v.size() and v[i] <= n)
                i++;
            n-=v[i-1];
        }
        
        cout<<cnt<<endl;
    }
    
    return 0;
}