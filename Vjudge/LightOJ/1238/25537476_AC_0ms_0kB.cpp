#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 40
using namespace std;
int row, col;
int dr[4]={1,-1,0,0};
int dc[4]={0,0,-1,1};
pair<int,int> h,a,b,c;
char g[maxn][maxn];
int level[maxn][maxn];

void clean()
{
    memset(g,0,sizeof g);
    memset(level,-1,sizeof level);
}

bool check(int x,int y)
{
    return x < 0 or y < 0 or x >= row or y >= col or g[x][y] == '#' or g[x][y] == 'm' or level[x][y]!=-1;
}

int bfs(pair<int,int> a)
{
    queue<pair<int,int>> q;
    q.push(a);
    level[a.first][a.second]=0;
    while (!q.empty())
    {
        pair<int,int> b=q.front();
       // cout<<b.first<<" "<<b.second<<endl;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x=dr[i]+b.first;
            int y=dc[i]+b.second;
            if(check(x,y) ) continue;
            level[x][y]=level[b.first][b.second]+1;
            q.push(make_pair(x,y));
        }
        
    }
    return level[h.first][h.second];
}

int main(){
    //fin;
    int t;
    cin>>t;
    int cs=0;
    while (t--)
    {
        clean();
        cin>>row>>col;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin>>g[i][j];
                if(g[i][j]=='h') h=make_pair(i,j);
                if(g[i][j]=='a') a=make_pair(i,j);
                if(g[i][j]=='b') b=make_pair(i,j);
                if(g[i][j]=='c') c=make_pair(i,j);
            }
            
        }
        
        int fst=bfs(a);
        memset(level, -1, sizeof level);
        int snd=bfs(b);
        memset(level, -1, sizeof level);
        int trd=bfs(c);

        int result=max(fst,snd);
        result=max(result,trd);

        printf("Case %d: %d\n",++cs,result);
    }
    
    return 0;
}