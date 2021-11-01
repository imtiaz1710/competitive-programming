#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin,fout;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int cnt=0;
        for (int  i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            cnt++;
        }
        if(cnt%2==1) 
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(cnt!=0 && cnt%2==0  && n>cnt )
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        if(cnt==0 || (n==cnt && cnt%2==0))
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}