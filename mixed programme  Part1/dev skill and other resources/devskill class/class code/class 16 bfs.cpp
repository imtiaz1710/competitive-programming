#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 101;

//adjacency list
vector <int> g[maxn];
int d[maxn];
bool visited[maxn];

int main(){
	filein;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= m; i++){
		int u, v;
		cin >> u >> v;
		g[u].push_back (v);
		g[v].push_back (u);
	}
	queue <int> q;
	q.push (1);
	d[1] = 0;
	visited[1] = true;
	while (!q.empty()){
		int u = q.front();
		q.pop();
		for (auto v: g[u]){
			if (!visited[v]){
				d[v] = d[u] + 1;
				visited[v] = true;
				q.push (v);
			}
		}
	}
	for (int i = 1; i <= n; i++)
		cout << i << ": " << d[i] << endl;
	return 0;
}

/*
 8 9

 1 2
 2 3
 1 5
 5 6
 6 4
 2 4
 3 7
 4 7
 4 8
 */
