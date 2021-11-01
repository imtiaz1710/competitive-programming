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
//const int maxn = 25;
//
//int grid[maxn][4];
//int dp[maxn][4];
//int caseno[maxn][4];
//int n, cs;
//
//int func (int id, int prevcolor){
//	if (id == n) return 0;
//	if (caseno[id][prevcolor] == cs)
//		return dp[id][prevcolor];
//	int ans = 20001;
//	if (id == 0){
//		for (int color = 0; color < 3; color++){
//			ans = min (ans, grid[id][color] + func (id + 1, color));
//		}
//	}
//	else{
//		for (int color = 0; color < 3; color++){
//			if (color == prevcolor) continue;
//			ans = min (ans, grid[id][color] + func (id + 1, color));
//		}
//	}
//	caseno[id][prevcolor] = cs;
//	dp[id][prevcolor] = ans;
//	return ans;
//}
//
//int main(){
//	filein;
//	int t;
//	cin >> t;
//	for (cs = 1; cs <= t; cs++){
//		cin >> n;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < 3; j++)
//				cin >> grid[i][j];
//		cout << "ans = " << func (0, 0) << endl;
//	}
//	return 0;
//}


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
//const int maxn = 305;
//
//int grid[maxn][maxn];
//int cs;
//
//int main(){
//	filein;
//	int t;
//	cin >> t;
//	for (cs = 1; cs <= t; cs++){
//		int n;
//		cin >> n;
//		for (int i = 1; i <= n; i++){
//			for (int j = 1; j <= i; j++)
//				cin >> grid[i][j];
//		}
//		for (int i = n + 1, c = n - 1; i <= 2 * n - 1; i++, c--){
//			for (int j = 1; j <= c; j++)
//				cin >> grid[i][j];
//		}
//		for (int i = 1; i <= 2 * n - 1; i++){
//			for (int j = 1; j <= n; j++)
//				cout << grid[i][j] << " ";
//			cout << endl;
//		}
//	}
//	return 0;
//}


#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

string s;
int n;

bool isPalindrome (int i, int j){
	string x = "";
	for (int e = i; e <= j; e++){
		x += s[e];
	}
	string y = x;
	reverse (y.begin(), y.end());
	return x == y;
}

int dp[60];

int rec (int start){
	if (start == n) return 0;
	if (dp[start] != -1){
		cout << "dp called" << endl;
		return dp[start];
	}
	int ans = 1000000;
	for (int j = start; j < n; j++){
		if (isPalindrome (start, j)){
			ans = min (ans, 1 + rec (j + 1));
		}
	}
	dp[start] = ans;
	return ans;
}

int main(){
	filein;
	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		memset (dp, -1, sizeof dp);
		cin >> s;
		n = s.size();
		cout << rec (0) << endl;
	}
	return 0;
}
