#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
   
    vector <pair<ll,ll> > a(n+1);
    ll sum=0;
    for (ll i = 1; i <= n; i++)
    {
        a[i].second=i;
        cin>>a[i].first;
        sum+=a[i].first;
    }
    if (n == 2)
    {
        if(a[1].first==0 and a[2].first==0){
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        else if(a[1].first==0)
        {
            cout<<1<<endl;
            cout << a[2].first << endl;
        }
        else if(a[2].first==0)
        {
            cout<<1<<endl;
            cout << a[1].first << endl;
        }
        else 
        cout << 0 << endl<<endl;
        return 0;
    }
    sort(a.begin(),a.end());
    ll cnt=0;
    vector <ll> res;
    if(sum-a[n].first-a[n-1].first==a[n-1].first) 
    {
        cnt++;
        res.push_back(a[n].second);
    }
    for (ll i = 1; i <= n-1; i++)
    {
        if((sum-a[i].first-a[n].first)==a[n].first)
        {
            res.push_back(a[i].second);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for (ll i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}