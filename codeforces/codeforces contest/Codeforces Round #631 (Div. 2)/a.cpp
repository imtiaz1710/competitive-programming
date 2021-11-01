#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,n;
        cin>>n>>x;
        int a[n];
        int mark[500];
        memset(mark,0,sizeof mark);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mark[a[i]]=1;
        }
        int result;
        for (int i = 1; i <=500 ; i++)
        {
            if (x == 0 and mark[i] == 0)
            {
                result=i-1;
                break;
            }
            if(mark[i]==0) x--;
            
        }
        cout<<result<<endl;
    }
    
    return 0;
}