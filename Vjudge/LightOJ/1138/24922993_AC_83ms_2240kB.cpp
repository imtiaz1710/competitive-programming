/*MY first and wrong attempt*/

// #include <bits/stdc++.h>
// #define ll long long
// #define fin freopen("in.txt", "r", stdin)
// #define fout freopen("out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define maxn (int)1e8+1
// #define maxloop (int)1e8
// using namespace std;
// vector<int> arr(maxn,0);

// void fun()
// {
//     for(int i=5;i<maxloop;i+=5)
//     {
//         int pow=5;
//         int tmp=1;
//         int zero=0;
//         while(tmp)
//         {
//             tmp=i/pow;
//             zero+=tmp;
//             pow*=5;
//             if(pow>i) break;
//         }
//         if(zero>=maxn) break;
//         arr[zero]=i;
//     }
// }
// int main(){
    
//     fun();
//     int t;
//     int tc=0;
//     scanf("%d",&t);
//     while (t--)
//     {
//         int n;
//         scanf("%d",&n);
//         if(arr[n])
//         {
//             printf("Case %d: %d\n",++tc,arr[n]);
//         }
//         else
//         {
//             printf("Case %d: impossible\n",++tc);
//         }
//     }
    
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
int zero_count(ll n)
{
    int divisor=5;
    int tmp=1;
    int total=0;
    while(tmp)
    {
        tmp=n/divisor;
        total+=tmp;
        divisor*=5;
    }
    return total;
}
ll bsearch(ll n)
{
    ll l=1,r=(ll)1e9;
    ll ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(zero_count(mid)==n)
        {
            ans=mid;
            r=mid-1;
        }
        else if(zero_count(mid)<n)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return ans;
}
int main(){
    fastio
    ll t;
    cin>>t;
    ll tc=0;
    while(t--)
    {
        ll n;
        cin>>n;
        if(ll res=bsearch(n))
        {
            printf("Case %lld: %lld\n",++tc,res);
        }
        else
            printf("Case %lld: impossible\n",++tc);

    }
    return 0;
}