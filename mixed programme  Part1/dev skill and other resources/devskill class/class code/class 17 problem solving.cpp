//lightoj-1012+1141

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
//int dr[] = {0, 0, -1, 1};
//int dc[] = {1, -1, 0, 0};
//
//char grid[maxn][maxn];
//bool visited[maxn][maxn];
//int row, col;
//
//inline bool okay (int vrow, int vcol){
//	return vrow >= 0 and vrow < row and vcol >= 0 and vcol < col and !visited[vrow][vcol] and grid[vrow][vcol] == '.';
//}
//
//void clean (){
//	memset (visited, false, sizeof visited);
//}
//
//int main(){
//	filein;
//	int t;
//	cin >> t;
//	for (int cs = 0; cs < t; cs++){
//		clean();
//		cin >> col >> row;
//		int srow, scol;
//		for (int i = 0; i < row; i++){
//			for (int j = 0; j < col; j++){
//				cin >> grid[i][j];
//				if (grid[i][j] == '@'){
//					srow = i;
//					scol = j;
//				}
//			}
//		}
//
//		queue <int> q;
//		visited[srow][scol] = true;
//		q.push (srow);
//		q.push (scol);
//
//		while (!q.empty()){
//			int urow = q.front();
//			q.pop();
//			int ucol = q.front();
//			q.pop();
//
//			for (int i = 0; i < 4; i++){
//				int vrow = urow + dr[i];
//				int vcol = ucol + dc[i];
//
//				if (okay (vrow, vcol)){
//					visited[vrow][vcol] = true;
//					q.push (vrow);
//					q.push (vcol);
//				}
//			}
//		}
//
//		int ans = 0;
//		for (int i = 0; i < row; i++)
//			for (int j = 0; j < col; j++)
//				if (visited[i][j]) ans++;
//
//		cout << ans << endl;
//
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
 
const int maxn = 1200;

vector <int> factorize (int a){
	vector <int> res;
	int sqa = sqrt (a);
	for (int i = 2; i <= sqa; i++){
		if (a % i == 0){
			while (a % i == 0)
				a /= i;
			res.push_back (i);
		}
	}
	if (a > 1) res.push_back (a);
	return res;
}

int d[maxn];

void clean(){
	for (int i = 0; i < maxn; i++){
		d[i] = -1;
	}
}

int main(){
	int t;
	cin >> t;
	for (int cs = 1; cs <= t; cs++){
		clean();
		int source, dest;
		cin >> source >> dest;
		
		queue <int> q;
		d[source] = 0;
		q.push (source);
		while (!q.empty()){
			int u = q.front();
			q.pop();
			vector <int> primes = factorize (u);
			for (int i = 0; i < primes.size(); i++){
				if (primes[i] != u){
					int v = u + primes[i];
					if (d[v] == -1 and v <= dest){
						q.push (v);
						d[v] = d[u] + 1;
					}
				}
			}
		}
		cout << d[dest] << endl;
	}
	return 0;
}

