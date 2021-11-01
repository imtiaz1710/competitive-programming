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
    ll x=0,y=0;
    ll cnt=0;
    for (ll i = 0; i < n-1; i++)
    {
        if(s[i]=='U') y++;
        else x++;
        if(x==y and ((s[i]=='R' and s[i+1]=='R') or (s[i]=='U' and s[i+1]=='U'))) cnt++;
    }

    cout<<cnt<<endl;
    return 0;
}