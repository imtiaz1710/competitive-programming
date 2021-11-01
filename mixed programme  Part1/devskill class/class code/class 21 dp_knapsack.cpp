#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 1005;

int dp[maxn][maxn];
int w[maxn], c[maxn];
int cs;
int n;

int rec (int rem, int id){
	if (id == n) return 0;
	if (dp[rem][id] != -1) return dp[rem][id];
	int nibo = -1, nibona = -1;
	if (rem >= w[id]) nibo = rec (rem - w[id], id + 1) + c[id];
	nibona = rec (rem, id + 1);
	return dp[rem][id] = max(nibo, nibona);
}

int main(){
	filein;
	int t;
	cin >> t;
	for (cs = 1; cs <= t; cs++){
		memset (dp, -1, sizeof dp);
		cin >> n;
		for (int i = 0; i < n; i++) cin >> w[i];
		for (int i = 0; i < n; i++) cin >> c[i];
		cout << rec (13, 0) << endl;
	}
	cout << clock() * 1.0 / CLOCKS_PER_SEC << endl;
	return 0;
}

/*
 2
 5
 6 2 1 1 1
 5 4 2 3 8
 5
 6 2 1 1 1
 5 4 2 3 8
 */
