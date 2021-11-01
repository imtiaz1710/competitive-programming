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
    string s;
    cin>>s;
    map<string,ll> m;
    for (ll i = 0; i < s.size()-1; i++)
    {
        string str="";
        str+=s[i];
        str+=s[i+1];
        m[str]++;
    }
    if(m["SF"]>m["FS"]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}