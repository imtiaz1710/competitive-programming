#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
       int first_end=-1,last_end=n;
       for (int i = 0; i < n; i++)
       {
           if(a[i]<i) break;
           first_end=i;
       }
       for (int i = n-1; i >=0; i--)
       {
           if(a[i]<n-1-i) break;
           last_end=i;
       }
       if(last_end<=first_end) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
       
    }
    
    return 0;
}