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
// ll dp[100009];

// ll fib(ll n)
// {
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(dp[n]!=0) return dp[n];
//     return dp[n]=(fib(n-1)%mod+fib(n-2)%mod)%mod;

// }
// int main()
// {
//     fib(100000);
//     dp[1]=1;
//     dp[2]=2;
//     string s;
//     cin >> s;
//     ll ans = 1;
//     dp[0] = 1;
//     for (ll i = 0; i < s.size(); i++)
//     {
//         if (s[i] == 'w' or s[i] == 'm')
//         {
//             cout << 0 << endl;
//             return 0;
//         }
//         ll cnt = 0;
//         if (s[i] == 'u')
//         {
//             ll j = i;
            
//             while (s[j] == 'u')
//             {
//                 cnt++;
//                 j++;
//             }
          
//             i = j - 1;
//         }
//         else if (s[i] == 'n')
//         {
//             ll j = i;

//             while (s[j] == 'n')
//             {
//                 cnt++;
//                 j++;
//             }
//             i = j - 1;
//         }
       
//             ans = (ans*dp[cnt])%mod;

    
//     }
//     cout << ans << endl;

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
ll dp[100009];

ll fib(ll n)
{
    if (dp[n] != 0)
        return dp[n];
    if(n==1) return dp[1]=1;
    if(n==2) return dp[2]=2;
    
    return dp[n]=(fib(n-1)%mod+fib(n-2)%mod)%mod;

}

int main(){
    fib(100000);
    string s;
    cin>>s;
    ll ans=1;
    char prev='.';
    ll cnt=1;
    for (ll i = 0; i < s.size(); i++)
    {
        if(s[i]=='m' or s[i]=='w') 
        {
            cout<<0<<endl;
            return 0;
        }
        if(s[i]==prev)cnt++;
        else
        {
            if(prev=='n' or prev=='u')
                ans=(ans*dp[cnt])%mod;
            cnt=1;
            prev=s[i];
        }
        if (i == s.size() - 1 and (prev == 'n' or prev == 'u'))
        {
            ans = (ans * dp[cnt]) % mod;
        } 
    }
    
    cout<<ans<<endl;
    return 0;
}