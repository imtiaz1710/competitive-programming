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
    cin >> s;
    if(n==1 and k==1)
    {
        cout<<0<<endl;
        return 0;
    }
    
    if(s[0]!='1' and k) {
        s[0]='1';
        k--;
    }
    for (ll i = 1; i < n and k; i++)
    {
        if(s[i]!='0') {
            s[i]='0';
            k--;
        }

    }
    cout<<s<<endl;
    return 0;
}