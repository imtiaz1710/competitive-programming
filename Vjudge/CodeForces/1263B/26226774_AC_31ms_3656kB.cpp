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
        string s[n];
        map<char,ll> mc;
        map<string,ll> ms;
        for (ll i = 0; i < n; i++)
        {
            cin>>s[i];
            mc[s[i][0]]=1;
        }
        ll cnt=0;
        for (ll i = 0; i < n; i++)
        {
            if(ms[s[i]]==0) ms[s[i]]++;
            else
            {
                for (char j = '0'; j <='9'; j++)
                {
                    if(mc[j]==0)
                    {
                        s[i][0]=j;
                        mc[j]++;
                        cnt++;
                        break;
                    }
                }
                
            }
            
        }
        cout<<cnt<<endl;
        for (ll i = 0; i < n; i++)
        {
            cout<<s[i]<<endl;
        }

    }
    
    return 0;
}