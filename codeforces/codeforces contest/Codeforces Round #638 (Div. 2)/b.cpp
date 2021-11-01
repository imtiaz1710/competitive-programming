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
        int n,k;
        cin>>n>>k;
        int a[n];
        vector <int> dist;
        int mark[n+1];
        memset(mark,0,sizeof mark);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];

            if(mark[a[i]]==0) {
                dist.push_back(a[i]);
            }
            mark[a[i]]=1;
        }
        if(dist.size()>k)
        {
            cout<<-1<<endl;
            continue;
        }
        
        while (dist.size()!=k)
        {
            dist.push_back(1);
        }
        
        int m=dist.size();
        int cnt=0;
        vector <int> res;
        int i=0;
        while (i!=n)
        {
            if(dist[cnt%m]==a[i])
            {
                res.push_back(a[i]);
                i++;
            }
            else
            {
                res.push_back(dist[cnt%m]);
            }
            
            cnt++;
        }
        cout<<res.size()<<endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;

    }
    
    return 0;
}