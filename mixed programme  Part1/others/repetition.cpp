#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    string a;
    cin>>a;
    char tmp=a[0];
    ll cnt=0;
    ll mx=0;
    for (ll i = 0; i < (ll)a.size(); i++)
    {
        if(tmp==a[i])
        {
            cnt++;
        }
        else
        {
            tmp=a[i];
            mx=max(mx,cnt);
            cnt=1;
        }
    }
    mx=max(mx,cnt);
    cout<<mx<<endl;
    return 0;
}