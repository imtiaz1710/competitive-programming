#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

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
        sort(a,a+n,cmp);
        int loop=n/3;
        int res=0;
        int i=0;
        while (loop--)
        {
            i++;
            res+=a[3*i-1];
        }
        cout<<res<<endl;
    }
    
    return 0;
}