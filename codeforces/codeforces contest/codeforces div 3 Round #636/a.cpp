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
        ll n;
        cin>>n;
       int pow=2;
       int sum=3;
       while (n%sum!=0)
       {
           pow*=2;
           sum+=pow;
       }
       cout<<n/sum<<endl;
       

    }
    
    return 0;
}