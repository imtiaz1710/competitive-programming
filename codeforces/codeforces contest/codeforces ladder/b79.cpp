#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
ll l,r;
vector <ll> a;
void solv()
{
    map<ll,ll> m;
    for (ll i = 0; i < a.size(); i++)
    {
        m[a[i]]++;
        if(m[a[i]]>1)
        {
            l=i;
            break;
        }
    }
   // m.clear();
    for (ll j = a.size()-1; j >= 0; j--)
    {
        m[a[j]]++;
        if (m[a[j]] > 1)
        {
            r = j;
            break;
        }
    }

}
int main(){
    l=r=-1;
    ll n;
    cin>>n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    solv();
    ll l1=l;
    ll r1=r;
    l=r=-1;
    reverse(a.begin(),a.end());
    solv();
    if(l==-1)
        cout<<0<<endl;
    else
        cout<<min(r-l+1,r1-l1+1)<<endl;

    return 0;
}


