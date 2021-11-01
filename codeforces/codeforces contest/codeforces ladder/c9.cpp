#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    // int t;
    // cin>>t;
    // while (t--)
    // {
        int n;
        cin>>n;
        vector <int> a[n+1];
        int j=1;
        for (int i = 1; i <= n; i++)
        {
            for (int k = 1; k <=n; k++)
            {
                a[i].push_back(j);
                j++;
            }
            if(i%2==1) reverse(a[i].begin(),a[i].end());
        }
        for (int i = 0; i < n; i++)
        {
            for (int k = 1; k <=n ; k++)
            {
                cout<<a[k][i]<<" ";
            }
            cout<<endl;
            
        }
        
        
   // }
    
    return 0;
}