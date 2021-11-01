#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int v[n+1];
        for (int i = 1; i <= n; i++)
        {
            int val;
            cin>>val;
            v[val]=i;
        }
        //for(int i=1;i<=n;i++) cout<<v[i]<<endl;

        bool visit[n+2];
        memset(visit,0,sizeof visit);
        visit[n+1]=1;
        int prev=v[1]+1;
        visit[v[1]]=1;
        bool f=0;
        for (int i = 2; i <= n; i++)
        {
            if(v[i]==prev and visit[v[i]]==0)
            {
                visit[v[i]]=1;
                prev++;
            }
            else if(visit[prev]==1 and visit[v[i]]==0)
            {
                visit[v[i]]=1;
                prev=v[i]+1;
                
            }
            else
            {
                f=1;
                break;
            }
            
        }
        if(f)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
        
    }
    
    return 0;
}