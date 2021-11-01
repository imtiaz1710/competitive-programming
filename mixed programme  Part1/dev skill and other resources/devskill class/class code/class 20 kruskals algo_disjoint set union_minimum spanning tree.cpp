#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 101;

//Minimum Spanning Tree
//1. Prim's Algorithm
//2. Kruskal's Algorithm - we'll learn this
//prerequisite - Disjoint Set Union (DSU)

int parent[maxn];
vector <pair <int, pair <int, int> > > edgelist;

int findparent (int a){
	if (a == parent[a]) return a;
	return parent[a] = findparent (parent[a]);
}

int main(){
	filein;
	for (int i = 0; i < maxn; i++)
		parent[i] = i;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int u, v, c;
		cin >> u >> v >> c;
		edgelist.push_back (make_pair (c, make_pair (u, v)));
	}
	sort (edgelist.begin(), edgelist.end());
	int mstcost = 0;
	for (int i = 0; i < m; i++){
		int u = edgelist[i].second.first;
		int v = edgelist[i].second.second;
		int pu = findparent(u);
		int pv = findparent(v);
		if (pu != pv){
			parent[pu] = pv;
			mstcost += edgelist[i].first;
		}
	}
	cout << mstcost << endl;
	return 0;
}
/*
 7 10
 4 6 1
 1 2 5
 2 3 6
 2 4 6
 1 4 3
 1 5 2
 3 5 4
 6 7 10
 7 5 8
 6 1 4
 */
