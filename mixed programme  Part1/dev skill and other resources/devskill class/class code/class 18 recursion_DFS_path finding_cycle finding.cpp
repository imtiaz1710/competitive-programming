//#include <bits/stdc++.h>
//
//#define filein freopen ("in.txt", "r", stdin)
//#define fileout freopen ("out.txt", "w", stdout)
//#define dbg(x) cerr << #x << ": " << x << endl
//#define ___ ios::sync_with_stdio (false); cin.tie (0);
//
//using namespace std;
//typedef long long ll;
//
//const int maxn = 100;
//
//vector <int> g[maxn];
//bool visited[maxn];
//int parent[maxn];
//
////O(V + E)
//void dfs (int u){
//	visited[u] = true;
//	for (auto v: g[u]){
//		if (!visited[v]){
//			parent[v] = u;
//			dfs (v);
//		}
//	}
//}
//
//int main(){
//	filein;
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++){
//		int u, v;
//		cin >> u >> v;
//		g[u].push_back (v);
//		g[v].push_back (u);
//	}
//	memset (parent, -1, sizeof parent);
//	dfs (3);
//	int current_node = 2;
//	vector <int> v;
//	while (current_node != -1){
//		v.push_back (current_node);
//		current_node = parent[current_node];
//	}
//	for (auto j : v) cout << j << endl;
//	return 0;
//}
//


#include <bits/stdc++.h>

#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);

using namespace std;
typedef long long ll;

const int maxn = 25;

int dr[] = {0, 0, -1, 1};
int dc[] = {1, -1, 0, 0};

char grid[maxn][maxn];
bool visited[maxn][maxn];
int row, col;

inline bool okay (int vrow, int vcol){
	return vrow >= 0 and vrow < row and vcol >= 0 and vcol < col and !visited[vrow][vcol] and grid[vrow][vcol] == '.';
}

void dfs (int urow, int ucol){
	visited[urow][ucol] = true;
	for (int i = 0; i < 4; i++){
		int vrow = urow + dr[i];
		int vcol = ucol + dc[i];
		if (okay(vrow, vcol))
			dfs (vrow, vcol);
	}
}

void clean (){
	memset (visited, false, sizeof visited);
}

int main(){
	filein;
	int t;
	cin >> t;
	for (int cs = 0; cs < t; cs++){
		clean();
		cin >> col >> row;
		int srow, scol;
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				cin >> grid[i][j];
				if (grid[i][j] == '@'){
					srow = i;
					scol = j;
				}
			}
		}

		dfs (srow, scol);
		
		int ans = 0;
		
		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
				if (visited[i][j]) ans++;
		
		cout << ans << endl;

	}
	return 0;
}

