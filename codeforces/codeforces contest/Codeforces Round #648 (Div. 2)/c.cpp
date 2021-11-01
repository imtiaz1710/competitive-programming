#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    cin>>n;
    
    int a[n+1],b[n+1]; //1 base index
    map<int,int> indx;
    int cnt[n];
    memset(cnt,0,sizeof cnt);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        indx[a[i]]=i;
    }
    int mx=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>b[i];
        int gap=indx[b[i]]-i;
        if(gap<0)
            gap=n+gap;
        cnt[gap]++;
        mx=max(cnt[gap],mx);
    }
    
    cout<<mx<<endl;
    return 0;
}