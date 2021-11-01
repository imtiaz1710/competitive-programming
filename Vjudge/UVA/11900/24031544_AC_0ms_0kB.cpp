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
    for (int i = 1; i <=t; i++)
    {
        int n,p,q;
        cin>>n>>p>>q;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        
        int res;
        int sum=0;
        p=min(p,n);
        for (int j = 0; j<p ; j++)
        {
            sum+=a[j];
            if(sum>q)
            {
                res=j;
                break;
            }
            else
            {
                res=j+1;
            }  
    }
    printf("Case %d: %d\n",i,res);
    }
    return 0;
}