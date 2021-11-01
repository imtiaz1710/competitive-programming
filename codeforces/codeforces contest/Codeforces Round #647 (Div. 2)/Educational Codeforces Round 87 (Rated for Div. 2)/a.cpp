#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            cout<<b<<endl;
        }
        else
        {
            if(c<=d)
            {
                cout<<-1<<endl;
            }
            else
            {
                ll baki=a-b;
                ll div= ceil((double)baki/(c-d));
                //cout<<div<<endl;
                ll total= b+div*c;
                cout<<total<<endl;
            }
            
        }
        
    }
    
    return 0;
}