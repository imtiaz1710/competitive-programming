#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
   // fin;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        a[0]=0;
        int freq[n+1];
        freq[0]=0;
        int mark[n+1];
        memset(mark,0,sizeof mark);
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
            freq[i]=a[i]+freq[i-1];
            mark[a[i]]++;
        }
        int cnt=0;
        for (int i = 2; i <= n-1; i++)
        {
            for (int j = 1; j <= n-i+1; j++)
            {
                int l=j-1;
                int r=j+i-1;
                int sum=freq[r]-freq[l];
                if(sum<=n and mark[sum])
                {
                    cnt+=mark[sum];
                    mark[sum]=0;
                }
            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}