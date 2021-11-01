//wrong attempt 1

// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short ll
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// #define maxn 1000000
// using namespace std;

// int n;
// int a[maxn];

// int max_sum(int pre,int id)
// {
//     if(id==n) return 0;
//     int nibo=-99999999,nibona=-99999999;
//     if((pre<0 and a[id]>0) or (pre>0 and a[id]<0))
//     {
//        nibo=a[id]+max_sum(a[id],id+1); 
//     }
//     nibona=max_sum(pre,id+1);
//     return max(nibo,nibona);
// }

// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
        
//         cin>>n;
//         for(int i=0;i<n;i++) cin>>a[i];
//         int ans=max_sum(-a[0],0);
//         cout<<ans<<endl;
//     }
    
//     return 0;
// }


//wrong attempt 2

// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     ll t;
//     cin>>t;
//     while (t--)
//     {
//         ll n;
//         cin>>n;
//         ll a[n];
//         for(ll i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
        
//         bool f=0;
//         ll sum1=0;
//         ll mx=-9999999999999;
//         for(ll i=0;i<n;i++)
//         {
//             if(a[i]>0 and f==0) 
//             {
//                 f=1;
//                 if (mx != -9999999999999)
//                     sum1 += mx;
//                 mx=a[i];
//             } 
//             else if(a[i]<0 and f==1)
//             {
//                 f=0;
//                 sum1+=mx;
//                 mx=a[i];
//             }
//             if(mx<a[i]) mx=a[i]; 
//         }
//         f=1;
//         ll sum2=0;
//         mx = -9999999999999;
//         for (ll i = 0; i < n; i++)
//         {
//             if (a[i] > 0 and f == 0)
//             {
//                 f = 1;
//                 sum2 += mx;
//                 mx = a[i];
//             }
//             else if (a[i] < 0 and f == 1)
//             {
//                 f = 0;
//                 if (mx != -9999999999999)
//                     sum2 += mx;
//                 mx = a[i];
//             }
//             if (mx < a[i])
//                 mx = a[i];
//         }
//         cout<<max(sum1,sum2)<<endl;
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
using namespace std;

int main(){
   // fin,fout;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool plus=0;
        bool minus=0;
        (a[0]<0)? plus=1:minus=1; //start with opposit sign
        ll mx=0;
        ll total=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<0 and plus)
            {
                plus=0;
                minus=1;
                total+=mx;
                mx = -9999999999;
            }
            else if(a[i]>0  and minus)
            {
                minus=0;
                plus=1;
                total+=mx;
                mx=0;
            }
            if(a[i]>mx) mx=a[i];
        }
        cout<<total+mx<<endl;
    }

}