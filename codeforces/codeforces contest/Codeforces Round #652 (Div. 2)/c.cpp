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
        ll n, k;
        cin>>n>>k;
        list <ll> a;   
        ll b[k];
        for (ll i = 0; i < n; i++)
        {
            ll tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        for (ll i = 0; i < k; i++)
        {
            cin>>b[i];
        }
        a.sort();
        sort(b,b+k);
       
        vector <ll> res[k];
        for (ll i = 0; i < k; i++)
        {
            res[i].push_back(a.back());
            a.pop_back();
            b[i]--;
        }
        // for (auto x : a)
        //     cout << x << " ";
        // cout << endl;
        // for (auto x : b)
        //     cout << x << " ";
        // cout << endl; 
        reverse(b,b+k);
        ll last=k-1;
        for (ll i = 0; i < k; i++)
        {
            if(b[i]) res[last--].push_back(a.front());
            while (b[i])
            {
                a.pop_front();
                b[i]--;
            }
        }
        ll ans=0;
        for (ll i = 0; i < k; i++)
        {
            if(res[i].size()==1) 
            {
                ans+=(res[i][0]*2);
            }
            else
            {
                ans+=(res[i][0]+res[i][1]);
            }
            
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}