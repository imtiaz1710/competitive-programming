// #include <bits/stdc++.h>
// #define ll long long
// #define us unsigned short int
// #define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
// #define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
// #define dbg(x) cerr << #x << ": " << x << endl
// #define fastio ios::sync_with_stdio (false); cin.tie (0);
// using namespace std;


// int main(){
//     fin;
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int a,b,q;
//         cin>>a>>b>>q;
//         if(a>b) swap(a,b);
//         for (int i = 0; i < q; i++)
//         {
//             int l,r;
//             cin>>l>>r;
//             int dane,bame,middle,x,total;
//             if(l<a and r<a)
//             {
//                 cout<<0<<" ";
//                 continue;
//             }   
//             x=a*b;
//             if(l<a){
//                 bame=a-l;
//                 dane=r-int(r/x)*x+1;
//                 if (r < x)
//                 {
//                     dane = 0;
//                 }
//                 dane=min(dane,a);
//             }
//             else
//             {
//                 bame=int(l/x)*x+a-1;
//                 bame = (bame >= l)? bame - l + 1 : 0;
//                 dane = r - int(r / x) * x + 1;
//                 if (r < x)
//                 {
//                     dane = 0;
//                 }
//                 dane = min(dane, a);
//             }
            
//             middle=(r-l)/x-1;
//             middle=max(0,middle);
//             total=dane+bame+middle;
//             cout<<total-(l-r)<<" ";
//         }
//         cout<<endl;
        
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
#define maxn 100007
using namespace std;


ll a,b;
ll len;
ll p[maxn];

void build()
{
    len=a*b;
    p[0]=0;
    for (ll i = 1; i <=len; i++)
    {
        p[i]=p[i-1];
        if((i%a)%b!=(i%b)%a)
            p[i]++;
    }
    
}
ll fun(ll l)
{
    ll cnt=l/len;
    ll rem=l%len;
    return cnt*p[len]+p[rem];
}

int main(){
   // fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll q;
        cin>>a>>b>>q;
        build();
        for (ll i = 0; i < q; i++)
        {
            ll l,r;
            cin>>l>>r;
            cout<<fun(r)-fun(l-1)<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}