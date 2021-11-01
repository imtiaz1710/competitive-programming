#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;

    while (t--)
    {
        ll cost=0;
        ll x,y;
        ll a,b;
        cin>>x>>y>>a>>b;
        if (x < y)
            swap(x, y);
        if(b<a)
        {
            cost=y*b;
            cost+=(x-y)*a;
        }
        else
        {
            ll tmp1,tmp2;
            tmp1=(x+y)*a;
            tmp2=y*b;
            //cout<<tmp2<<endl;
            tmp2+=(x-y)*a;
            
            cost=min(tmp1,tmp2);
        }
        cout<<cost<<endl;
        
    }
    
    return 0;
}