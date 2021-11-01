#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int tmp=a[n-1];
    int ans=1;
    for (int i = n-2; i >= 0; i--)
    {
        if(a[i]!=tmp)
        break;
        ans++;
    }
    
    cout<<ans<<endl;
    return 0;
}