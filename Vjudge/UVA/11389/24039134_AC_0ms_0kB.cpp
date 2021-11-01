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
    int n,d,r;
    cin>>n>>d>>r;
    while (!(n==0 && d==0 && r==0))
    {
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
        sort(a,a+n);
        sort(b,b+n,cmp);
        int res=0;
        for (int i = 0; i < n; i++)
        {
            int exceeded_length=(a[i]+b[i])-d;
            if(exceeded_length>0)
            res+=exceeded_length*r;
        }
        cout<<res<<endl;
        cin>>n>>d>>r;
    }
    
    return 0;
}