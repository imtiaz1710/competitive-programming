#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        bool plus,minus,f;
        cin>>n;
        f=plus=minus=0;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            
            if(a[i]<b[i] and plus==0)
            {
                f=1;
                break;
            }
            else if(a[i]>b[i] and minus==0)
            {
                f=1;
                break;
            }
            if (a[i] == 1)
            {
                plus = 1;
            }
            if (a[i] == -1)
            {
                minus = 1;
            }
        }
        
        if(f) cout<<"no"<<endl;
        else cout<<"Yes"<<endl;
        
    }
    
    return 0;
}