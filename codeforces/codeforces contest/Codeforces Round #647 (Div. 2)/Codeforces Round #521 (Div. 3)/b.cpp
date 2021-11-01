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
    //int t;
    //cin>>t;
    //while (t--)
    //{
        int n;
        cin>>n;
        int a[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        int cnt=0;
        for (int i = 2; i < n; i++)
        {
            if(a[i]==0 and a[i-1]==1 and a[i+1]==1)
            {
                a[i+1]=0;
                cnt++;
            }
        }
        cout<<cnt<<endl;
   // }
    
    return 0;
}