#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n, k;
        cin>>n>>k;
        ll odd=n-(k-1);
        ll even=n-((k-1)*2);
        if(odd>0 and odd%2==1)
        {
            cout<<"YES"<<endl;
            for (ll i = 0; i < k-1; i++)
            {
                cout<<1<<" ";
            }
            cout<<odd<<endl;
        }
        else if(even>0 and even%2==0)
        {
            cout<<"YES"<<endl;
            for (ll i = 0; i < k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout<<even<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    

    return 0;
}