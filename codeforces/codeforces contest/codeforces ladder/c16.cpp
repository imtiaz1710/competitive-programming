// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// vector <ll> a;
// ll n;

// map<pair<ll,ll>,ll> dp;

// pair<ll,ll> rec(ll l,ll r)
// {
//     if(dp.count({l,r})) return dp[{l,r}];
//     if(l+1==r)
//     {
//         ll ans = 0;
//         if((a[l]+a[r]) >= 10)
//             ans++;
//        // dp[{l,r}]=ans;
//         q.push((a[l]+a[r])%10);
//         while (q.size()>1)
//         {
//             ll x=q.front();
//             q.pop();
//             ll y=q.front();
//             q.pop();

//             if(x + y >= 10)
//                 ans++;
//             q.push((x+y)%10);
//         }
//         return ans;
//     }
//     else
//     {
//         ll mid=(l+r)/2;
//         return dp[{l,r}]=rec(l,mid)+rec(mid+1,r);
//     }
// }

// int main()
// {
//    // freopen("/home/imtiaz/Desktop/in.txt", "r", stdin);

//         cin>>n;
//         a.resize(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }
//         ll k;
//         cin>>k;
//         while (k--)
//         {
//             while (!q.empty())
//             {
//                 q.pop();
//             }

//             ll x,y;
//             cin>>x>>y;
//             x--,y--;
//             if(x==y) {
//                 cout<<0<<endl;
//                 continue;
//             }
//             cout<<rec(x,y)<<endl;
//         }
// }

#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> a;
ll n;

map<pair<ll, ll>, pair<ll, ll>> dp;

pair<ll, ll> rec(ll l, ll r)
{
    if (dp.count({l, r}))
        return dp[{l, r}];
    if (l + 1 == r)
    {
        ll ans = 0;
        if ((a[l] + a[r]) >= 10)
            ans++;

        int rtn = (a[l] + a[r]) % 10;

        return dp[{l, r}] = make_pair(ans, rtn);
    }
    else
    {
        ll mid = (l + r) / 2;
        pair<int, int> num1, num2;
        num1 = rec(l, mid);
        num2 = rec(mid + 1, r);
        int ans = num1.first + num2.first;
        if (num1.second + num2.second >= 10)
            ans++;
        int rtn = (num1.second + num2.second) % 10;
        return dp[{l, r}] = make_pair(ans, rtn);
    }
}

int main()
{
    //freopen("/home/imtiaz/Desktop/in.txt", "r", stdin);

    cin >> n;
    a.resize(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll k;
    cin >> k;
    while (k--)
    {

        ll x, y;
        cin >> x >> y;
        x--, y--;
        if (x == y)
        {
            cout << 0 << endl;
            continue;
        }
        pair<int, int> ans = rec(x, y);
        cout << ans.first << endl;
    }
}
