#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define inf 1000000000
using namespace std;


int main(){
    fin;
    int n;
    cin>>n;
    int g[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
       
        for(int j=1;j<n;j++)
        {
            g[i][j]=inf;
        }
        g[i][i] = 0;
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x][y]=g[y][x]=w;
    }

    for (int k = 1; k <= n; k++)      //main algo 
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(g[i][j]>g[i][k]+g[k][j])
                 g[i][j]=g[i][k]+g[k][j];
            }
            
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(g[i][j]!=inf and g[i][j]!=0)
            {
                cout << i << "-->" << j << "=" << g[i][j] << endl;
            }
           
        }
        
    }
    
    
    
    
    return 0;
}
/*
5 7
1 2 1
1 3 3
1 5 5
2 4 1
2 5 5
3 5 1
4 5 2
*/