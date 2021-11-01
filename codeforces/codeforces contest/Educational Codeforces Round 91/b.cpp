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
        string str;
        cin>>str;
        ll s=0;
        ll p=0;
        ll r=0;
        for (ll i = 0; i < str.size(); i++)
        {
            if(str[i]=='R')r++;
            if(str[i]=='P') p++;
            if(str[i]=='S') s++;
        }
        char ch;
        if (r>=p and r>=s)
            ch= 'P';
        if (p>=s and p>=r)
            ch= 'S';
        if (s>=p and s>=r)
            ch= 'R';
        for (ll i = 0; i < str.size(); i++)
        {
                cout<<ch;
        }
        cout<<endl;
    }
    
    return 0;
}