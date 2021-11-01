#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    while(cin>>n,n)
    {
        vector<ll> divisor;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                if(i!=n/i)
                {
                    divisor.push_back(i);
                    divisor.push_back(n/i);
                }
                else
                    divisor.push_back(i);
                
            }
        }
        ll cnt=1;
        for(ll i=0;i<divisor.size()-1;i++)
        {
            for(ll j=i+1;j<divisor.size();j++)
            {
                ll gcd=__gcd(divisor[i],divisor[j]);
                ll lcm=(divisor[i]*divisor[j])/gcd;
                if(lcm==n)
                {
                    cnt++;
                }
            }
        }
        cout<<n<<" "<<cnt<<endl;
    }
    return 0;
}