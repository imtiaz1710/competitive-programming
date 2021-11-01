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
        int n,k,m;
        cin>>n>>k>>m;
        int l,r;
        l=r=k;
        for (int i = 0; i < m; i++)
        {
            int a,b;
            cin>>a>>b;
            if(max(a,l)<=min(b,r))
            {
                l=min(a,l);
                r=max(b,r);
            }
        }
        cout << r - l + 1 << endl;
    }
    
    return 0;
}