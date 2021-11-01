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
//const int maxn = 1005;
//
//int a[55], c[55];
//int dp[55][maxn];
//int n, k;
//
//int rec (int id, int k_sofar){
//	if (id == n){
//		if (k_sofar == k) return 1;
//		else return 0;
//	}
//	if (dp[id][k_sofar] != -1) return dp[id][k_sofar];
//	int ans = 0;
//	for (int i = 0; i <= c[id]; i++){
//		int amount = a[id] * i;
//		if (k_sofar + amount <= k){
//			ans = (ans + rec (id + 1, k_sofar + amount)) % 100000007;
//		}
//	}
//	return dp[id][k_sofar] = ans;
//}
//
//int main(){
//	filein;
//	int t;
//	cin >> t;
//	while (t--){
//		memset (dp, -1, sizeof dp);
//		cin >> n >> k;
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		for (int i = 0; i < n; i++)
//			cin >> c[i];
//		cout << rec (0, 0) << endl;
//	}
//	cout << clock() * 1.0 / CLOCKS_PER_SEC << endl;
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
 
const int maxn = 65;

string s;
int n;
int dp[maxn][maxn];

int rec (int i, int j){
	if (i == j) return 1;
	if (i > j) return 0;
	
	int ans = 0;
	if (s[i] != s[j])
		ans = rec (i + 1, j) + rec (i, j - 1) - rec (i + 1, j - 1); //mismatch
	else
		ans = (1 + rec (i + 1, j - 1)) + rec (i + 1, j) + rec (i, j - 1) - rec (i + 1, j - 1);
		//match + mismatch
	return ans;
}

int main(){
	filein;
	int t;
	cin >> t;
	while (t--){
		cin >> s;
		n = (int) s.size();
		cout << rec (0, n - 1) << endl;
	}
	return 0;
}
