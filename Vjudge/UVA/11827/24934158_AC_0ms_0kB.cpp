#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll t;
    scanf("%lld",&t);
    string s;
    getline(cin,s);
    while(t--)
    {
        int n;
        vector <ll> val;
        getline(cin,s);
        
        stringstream ss(s);
        while(ss>>n)
        {
            //cout<<n<<endl;
            val.push_back(n);
        }
        ll mx=1;
        for(ll i=0;i<val.size()-1;i++)
        {
            for(ll j=i+1;j<val.size();j++)
            {
                ll tmp=__gcd(val[i],val[j]);
                if(mx<tmp) mx=tmp;
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}