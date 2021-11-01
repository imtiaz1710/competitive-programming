#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    fin;
    int t;
    cin>>t;
    while (t--)
    {
        int r,c;
        cin>>r>>c;
        int a[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>a[i][j];
                
            }
            
        }
        int grp=r+c-1;
        set <pair<int,int>> g[grp+1];
        g[1].insert({0,0});
        for (int i = 2; i <= grp; i++)
        {
            for (auto j = g[i-1].begin(); j != g[i-1].end(); j++)
            {
                int x=j->first;
                int y=j->second;
                if(x+1 < r)
                {
                    g[i].insert({x+1,y});
                }
                if (y+1 < c)
                {
                    g[i].insert({x, y+1});
                }
            }
            //cout<<g[i-1].size()<<" "<<g[i].size()<<endl;
            
        }
        int ans=0;
        for (int i = 1; i <= grp/2; i++)
        {
            int cnt[2] = {0, 0};
            for (auto j = g[i].begin(); j!= g[i].end(); j++)
            {
                int x=j->first;
                int y=j->second;
                cnt[a[x][y]]++;
            }
            for (auto j = g[grp - i + 1].begin(); j != g[grp - i + 1].end(); j++)
            {
                int x = j->first;
                int y = j->second;
                cnt[a[x][y]]++;
            }

           // cout << g[i].size() << " " << g[grp - i + 1].size() << endl;
            ans+=min(cnt[0],cnt[1]);
        }
        
        cout<<ans<<endl;
    }

    return 0;
}