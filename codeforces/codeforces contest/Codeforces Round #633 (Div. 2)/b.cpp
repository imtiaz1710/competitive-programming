#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin;
   ll t;
    cin>>t;
    while (t--)
    {
       ll n;
        cin>>n;
       ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        vector <int> res;
        ll j=n-1;
        for (int i = 0; i < n/2; i++)
        {
            res.push_back(a[i]);
            res.push_back(a[j]);
            j--;
        }
        if(n%2==1)
        {
           ll mid=n/2+1;
            res.push_back(a[mid-1]);
        }
        for (int i = n-1; i>=0; i--)
        {
             cout<<res[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}