#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 17;

int setbit (int n, int i){
	return n | (1 << i);
}

bool checkbit (int n, int i){
	return n & (1 << i);
}

int resetbit (int n, int i){
	return n & ~(1 << i);
}

int grid[maxn][maxn];
int dp[(1 << maxn)];
int n;

int popcount (int mask){
	int res = 0;
	for (int i = 0; i < n; i++)
		if (checkbit(mask, i)) res++;
	return res;
}

int rec (int mask){
	int id = popcount(mask); //use __builtin_popcount()
	if (id == n) return 0;
	if (dp[mask] != -1){
		cout << "dp called" << endl;
		return dp[mask];
	}
	int ans = 0;
	for (int i = 0; i < n; i++){
		if (!checkbit (mask, i)){
			int new_mask = setbit (mask, i);
			ans = max (ans, grid[id][i] + rec (new_mask));
		}
	}
	return dp[mask] = ans;
}

int main(){
	filein;
	int t;
	cin >> t;
	while (t--){
		memset (dp, -1, sizeof dp);
		cin >> n;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		int ans = rec (0);
		cout << ans << endl;
	}
	return 0;
}
