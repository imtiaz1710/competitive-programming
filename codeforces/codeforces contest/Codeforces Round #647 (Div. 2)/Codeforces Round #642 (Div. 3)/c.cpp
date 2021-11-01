#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll half=n/2;
        ll row=half+1;
        ll col=half+1;
        ll sum=0;
        cout<<half<<endl;
        for (ll i = 1; i <= half; i++)
        {
            for (ll j = 1; j <= half; j++)
            {
                sum+=max(row-i,col-j);
                
            }
        }
        sum*=4;
        sum+=half*4;
        cout<<sum<<endl;
    }
    
    return 0;
}