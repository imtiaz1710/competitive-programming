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
        string a, b;
        cin >> a >> b;
        ll sz=min(a.size(),b.size());
        bool f=0;
        for (ll i = 0; i < sz; i++)
        {
            if(a[i]==b[i]) continue;
            if (a[i] > b[i])
            {
                char mn = i;
                for (ll j = i + 1; j < sz; j++)
                {
                    if (a[j] < a[mn])
                        mn = j;
                }
                if (a[mn] <= b[i])
                {
                    swap(a[mn],a[i]);
                    break;
                }
                else
                {
                    cout<<"---"<<endl;
                    f=1;
                    break;
                }
            }
        }
        if(f==0){
            if(a<b)
            cout<<a<<endl;
            else
            cout<<"---"<<endl;
        }
    }
    
    
    
    return 0;
}