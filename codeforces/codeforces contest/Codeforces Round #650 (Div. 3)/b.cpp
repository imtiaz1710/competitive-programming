#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
  //  fin;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int e, o;
        e = o = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            
            if(a[i]%2!=i%2)
            {
                if(a[i]%2==0) e++;
                else o++;
            }
        }
        if(e==o) cout<<e<<endl;
        else cout<<-1<<endl;
        
    }
    
    return 0;
}