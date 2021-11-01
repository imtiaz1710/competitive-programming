// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio                   \
//     ios::sync_with_stdio(false); \
//     cin.tie(0);
// #define mod 1000000007
// using namespace std;

// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         ll a[n];
//         ll b[m];
//         ll total = 0;
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             total += min(n, a[i] + 1);
//             a[i] = min(n - 1, a[i]);
//         }
//         for (ll i = 0; i < m; i++)
//         {
//             cin >> b[i];
//             total += (m, b[i] + 1);
//             b[i] = min(b[i], m - 1);
//         }
//         // ll common=0;
//         for (ll i = 0; i < n; i++)
//         {
//             for (ll j = 0; j <= a[i]; j++)
//             {
//                 if (b[j] >= i)
//                     total--;
//             }
//         }
//         ll empty = n * m - total;
        
//         cout << total << endl;
//         cout << empty << endl;
//         //cout<<n*m<<" "<<total<<" "<<common<<endl;
//         ll ans = 1;
//         for (ll i = 1; i <= empty; i++)
//         {
//             ans = (ans * (i % mod)) % mod;
//         }
//         cout << ans +1 << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mod 1000000007
using namespace std;


int main(){
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    ll b[n];
    ll c[m];
    memset(a,0,sizeof a);
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        b[i]=tmp;
        cin>>tmp;
        for (ll j = 0; j <= min(m-1,tmp); j++)
        {
            a[i][j]=1;
        }
        
    }
    for (ll i = 0; i < m; i++)
    {
        ll tmp;
        c[i]=tmp;
        cin>>tmp;
        for (ll j = 0; j <= min(n-1,tmp); j++)
        {
            a[j][i]=1;
        }
    }
    int f=0;
    for (ll i = 0; i < n; i++)
    {
        int cnt=0;
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]==0) break;
            cnt++;
        }
        if(b[i]!=cnt-1) f=1;
    }
    for (ll i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j][i] == 0)
                break;
                cnt++;
        }
        if (c[i] != cnt-1)
            f = 1;
    }
    if(f)
    {
        cout<<0<<endl;
        return 0;
    }
    ll ans=1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
            if(a[i][j]==0) ans=(ans*2)%mod;
        }
        cout<<endl;
    }
    ans==1? cout<<0<<endl : cout<<ans<<endl;

    return 0;
}