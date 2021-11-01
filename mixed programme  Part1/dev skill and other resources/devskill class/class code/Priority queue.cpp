#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

priority_queue<pair <int, string> > q;

int main(){
	filein;
	int n;
	cin >> n;
	while (n--){
		string s;
		int number;
		cin >> s >> number;
		q.push (make_pair (number, s));
	}
	while (!q.empty()){
		cout << q.top().second << " " << q.top().first << endl;
		q.pop();
	}
	return 0;
}
