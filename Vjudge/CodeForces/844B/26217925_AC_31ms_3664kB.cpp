#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>a[i][j];
        } 
    }
    ll sum=0;
    for (ll i = 0; i < n; i++)
    {
        ll zero,one;
        zero=one=0;
        for (ll j = 0; j < m; j++)
        {
            if(a[i][j]==0) zero++;
            else one++;
        }
        if(one>1) sum+=pow(2,one)-one-1;
        if(zero>1) sum+=pow(2,zero)-zero-1;
    }

    for (ll i = 0; i < m; i++)
    {
        ll zero, one;
        zero = one = 0;
        for (ll j = 0; j < n; j++)
        {
            if (a[j][i] == 0)
                zero++;
            else
                one++;
        }
        if (one > 1)
            sum += pow(2, one) - one-1;
        if (zero > 1)
            sum += pow(2, zero) - zero-1;
    }
    cout<<sum+n*m<<endl;
    return 0;
}