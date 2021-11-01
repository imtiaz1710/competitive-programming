#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll k,a,b;
    cin>>k>>a>>b;
    ll total=a+b;
    ll res=total/k;
    if(res)
        cout<<res<<endl;
    else
    {
        cout<<-1<<endl;
    }
    
    return 0;
}