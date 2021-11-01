#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 101;

//dijkstra's algorithm

vector <pair <int, int> > g[maxn];
int d[maxn];

int main(){
	filein;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int u, v, c;
		cin >> u >> v >> c;
		g[u].push_back (make_pair (c, v));
		g[v].push_back (make_pair (c, u));
	}
	for (int i = 0; i <= n; i++)
		d[i] = 100000000; //initially set all distances to a large value
	d[1] = 0; //source distance is zero
	priority_queue <pair <int, int> > q;
	q.push (make_pair (0, 1));
	while (!q.empty()){
		pair <int, int> u = q.top();
		q.pop();
		for (int i = 0; i < g[u.second].size(); i++){
			pair <int, int> v = g[u.second][i];
			if (d[v.second] > d[u.second] + v.first)]{
				d[v.second] = d[u.second] + v.first;
				q.push (make_pair (-d[v.second], v.second));
			}
		}
	}
	for (int i = 1; i <= n; i++)
		cout << i << " " << d[i] << endl;
	return 0;
}
