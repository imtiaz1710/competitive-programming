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
        string a, b,sa;
        cin >> a >> b;
        if(a<=b){
            cout<<a<<endl;
            continue;
        }
        sa=a;
        sort(sa.begin(),sa.end());
        for (ll i = 0; i < sa.size(); i++)
        {
            if(sa[i]!=a[i])
            {
                for (ll j = i+1; j < sa.size(); j++)
                {
                    if(sa[i]==a[j])
                    {
                        swap(a[i],a[j]);
                        break;
                    }
                }
              break;  
            }
        }
        if(a<=b){
            cout<<a<<endl;
        }
        else cout<<"---"<<endl;
        
    }
    
    
    
    return 0;
}