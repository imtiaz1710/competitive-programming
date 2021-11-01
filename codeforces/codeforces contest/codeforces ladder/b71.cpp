#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll r,c;
    cin>>r>>c;
    char a[r][c];
    for (ll i = 0; i < r; i++)
    {
        for (ll j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    ll cr=0,cc=0;
    bool f=0;
    for (ll i = 0; i < r; i++)
    {
        ll cntr=0;
        for (ll j = 0; j < c; j++)
        {
            if (a[i][j] == 'X')
                cntr++;
        }
        if(cr!=0 and cntr!=0 and cntr!=cr) f=1;
        else cr=cntr;
    }
    for (ll i = 0; i < c; i++)
    {
        ll cntc = 0;
        for (ll j = 0; j < r; j++)
        {
            if (a[j][i] == 'X')
                cntc++;
        }
        if (cc != 0 and cntc != 0 and cntc != cc)
            f = 1;
        else
            cc = cntc;
    }
    if (!f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

        return 0;
}