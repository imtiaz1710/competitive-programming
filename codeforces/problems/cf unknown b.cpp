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
    int t;
    cin>>t;
    while (t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        while ((x/2)+10<=x and n--)
        {
            x=(x/2)+10;
        }
        while (x>0 and m--)
        {
            x-=10;
        }
        
        if(x<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}