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
    ll row=0;
    bool f=0;
    for (ll i = 0; i < r; i++)
    {
        ll cnt=0;
        for (ll j = 0; j < c; j++)
        {
            if(a[i][j]=='X') cnt++;
        }
        if(row==0 and cnt!=0)
            row=cnt;
        if(row!=0 and cnt!=0 and row!=cnt) f=1;
    }
    ll col=0;
    for (ll i = 0; i < c; i++)
    {
        ll cnt=0;
        for (ll j = 0; j < r; j++)
        {
            if (a[j][i] == 'X')
                cnt++;
        }
        if (col == 0 and cnt != 0)
            col = cnt;
        if (col != 0 and cnt != 0 and col != cnt)
            f = 1;
    }
    if(f) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    return 0;
}