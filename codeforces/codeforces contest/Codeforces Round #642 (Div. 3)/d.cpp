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
        int n;
        cin>>n;
        set<pair<int,int>> s;
        int a[n+1];
        memset(a,0,sizeof a);
        s.insert({-n,1});
        int step=1;
        while (step<=n)
        {
            auto tmp=s.begin();
            int l=-tmp->first;
            int start=tmp->second;
            int m=l/2;
            s.erase(tmp);
            if(l%2==0)
            {
               a[start+m-1]=step;
               s.insert({-(m-1),start});
               s.insert({-m,start+m});
            }
            else
            {
                a[start+m]=step;
                s.insert({-(m),start});
                s.insert({-(m),start+m+1});
            }
            
            step++;
        }   
        for (int i = 1; i <= n ; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    
    return 0;
}