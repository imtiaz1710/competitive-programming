#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
// ll pow[36];
// void build()
// {
//     pow[1]=1;
//     int p=2;
//     for (int i = 2; i < 36; i++)
//     {
//         pow[i]=p;
//         p*=2;
//     }
    
// }

int main(){
   // fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        bool f=0;
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
            if(i!=0 and a[i-1]>a[i])
            f=1;
        }
        if(f==0){
            cout<<0<<endl;
            continue;
        }
        
        ll mx=a[0];
        ll max_dis=0;
        for (ll i = 1; i < n; i++)
        {
           if(a[i]>=mx) mx=a[i];
           else
           {
               max_dis=max(max_dis,mx-a[i]);
           }
           
        }

        ll pow=2;
        ll t=1;
        while (pow-1<max_dis)
        {
            t++;
            pow*=2;
        }
        cout<<t<<endl;

        
    }
    
    return 0;
}