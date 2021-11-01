#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        if(a<b) swap(a,b);
        b=a+b;
        swap(a,b);
        ll cnt=1;
        while (a<=n)
        {
            b=a+b;
            swap(a,b);
            cnt++;
        }
        cout<<cnt<<endl;
           
    }
    
    return 0;
}