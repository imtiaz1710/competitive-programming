#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,ll> m;
    map<char,ll> check;
    for (ll i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    ll cnt=0;
    for (ll i = 0; i < n; i++)
    {
        if(check[s[i]]==0)
        {
            cnt++;
            check[s[i]]=1;
        }
        if(cnt>k){
            cout<<"YES"<<endl;
            return 0;
        }
        if(m[s[i]]==1)
            cnt--;
        m[s[i]]--;
    }
    cout<<"NO"<<endl;
    
    return 0;
}