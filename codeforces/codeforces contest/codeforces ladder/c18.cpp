// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define inf 1000000000
// using namespace std;

// int main(){
//     ll n;
//     cin>>n;
//     ll a[n];
//     ll c[n];
//     for (ll i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     for (ll i = 0; i < n; i++)
//     {
//         cin>>c[i];
//     }
   
//     ll mx=inf;
//     for (ll i = 0; i < n-2; i++)
//     {
//         vector <pair<ll,ll>> tmp;
      
//         for (ll j = i+1; j < n; j++)
//         {
//             if(a[i]<a[j]) tmp.push_back({c[j],a[j]});
//         }
//         if(tmp.size()>=2)
//         {
//            sort(tmp.begin(),tmp.end());
//             for (ll ou = 0; ou < tmp.size()-1; ou++)
//             {
//                bool brk=0;
//                ll sum = 0;
//                for (ll in = ou + 1; in < tmp.size(); in++)
//                {
//                    if (tmp[ou].second < tmp[in].second)
//                    {
//                        sum += (c[i] + tmp[ou].first + tmp[in].first);
//                        if (sum < mx)
//                            mx = sum;                     
//                        sum=0;
//                     }
//                 }
//             }
//         }
//     }
//     if(mx==inf)
//     {
//         cout<<-1<<endl;
//     }
//     else cout<<mx<<endl;
    
//     return 0;
// }



// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define inf 1000000000
// using namespace std;


// int main(){
//     ll n;
//     cin>>n;
//     ll a[n];
//     ll b[n];
//     ll mx=inf;
//     for(ll &tmp: a)
//     {
//         cin>>tmp;
//     }
//     for(ll &tmp: b)
//     {
//         cin>>tmp;
//     }
//     for (ll i = 0; i < n-2; i++)
//     {
//         ll sum=0;
//         for (ll j = i+1; j < n-1; j++)
//         {
//             if(a[i]<a[j]){
//                 for (ll k = j+1; k < n; k++)
//                 {
//                     if(a[j]<a[k])
//                     {
//                         sum=b[i]+b[j]+b[k];
//                         if(sum<mx) mx=sum;
//                     }
//                 } 
//             } 
//         }
//     }
//     if(mx==inf) cout<<-1<<endl;
//     else cout<<mx<<endl;
//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define inf 1000000000
using namespace std;


int main(){
    ll n;
    cin>>n;
    ll a[n],b[n];

    for(ll &tmp: a)
        cin>>tmp;
    for(ll &tmp: b)
        cin>>tmp;

    ll first_two[n];

    for(ll &tmp: first_two) tmp=inf;

    for(ll i=0;i<n-1;i++)
        for (ll j = i+1; j < n; j++)
        {
            if(a[i]<a[j]) 
                {
                    first_two[j]=min(first_two[j],b[i]+b[j]);
                }
        }
    ll ans=inf;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = i+1; j < n; j++)
        {
            if(a[i]<a[j])
            {
                ans=min(ans,first_two[i]+b[j]);
            }
        }
        
    }
    if(ans==inf) cout<<-1<<endl;
    else cout<<ans<<endl;
        
    return 0;
}