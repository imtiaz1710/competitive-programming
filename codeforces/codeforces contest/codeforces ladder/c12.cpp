#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    ll n;
    cin>>n;
   
    int mark[n+2];
    memset(mark,0,sizeof mark);
    int cnt=1;
    for (int i = 2;  i <= n; i++)
    {
     
        int tmp=i;
        bool f=0;
        while (tmp<=n)
        {
            
            if(mark[tmp]==0)
            {
                mark[tmp] = cnt;
                f=1;
            }
            tmp+=i;
            
        }
        if(f) cnt++;
    }
    for (int i = 2; i <= n; i++)
    {
        cout<<mark[i]<<" ";
    }
    cout<<endl;
    return 0;
}

