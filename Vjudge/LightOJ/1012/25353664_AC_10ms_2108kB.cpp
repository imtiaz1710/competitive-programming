#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define us unsigned short int
using namespace std;
int dr[4]={0,0,-1,1};
int dc[4]={1,-1,0,0};
int r,c;
char a[100][100];
bool visited[100][100];
bool check(int row,int col)
{
	return row>=0 and row<r and col>=0 and col<c and a[row][col]!='#' and !visited[row][col];
}
void clean()
{
	memset(visited,false,sizeof visited);
}
int main(){
	//fin,fout;
    int t;
    cin>>t;
    int tc=0;
    while(t--){

   		clean();
   		pair<int,int> root;
   		cin>>c>>r;

   		for (int i = 0; i < r; ++i)
   		{
   			for (int j = 0; j < c; ++j)
   			{
   				cin>>a[i][j];
   				if(a[i][j]=='@'){
   					root.first=i;
   					root.second=j;
   				}
   			}
   		}
   		queue<int> q;
   		q.push(root.first);
   		q.push(root.second);
   		visited[root.first][root.second]=true;
   		int cnt=1;
   		while(!q.empty())
   		{
   			int row=q.front();
   			q.pop();
   			int col=q.front();
   			q.pop();
   			for (int i = 0; i < 4; ++i)
   			{
   				int tmpr=dr[i]+row;
   				int tmpc=dc[i]+col;
   				if(check(tmpr,tmpc))
   				{
   					q.push(tmpr);
   					q.push(tmpc);
   					cnt++;
   					visited[tmpr][tmpc]=true;
   				}
   			}
   		}
   		printf("Case %d: %d\n",++tc,cnt );
    }


    return 0;
}
