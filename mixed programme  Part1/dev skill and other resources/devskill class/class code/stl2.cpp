#include <bits/stdc++.h>

#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

int main(){
	filein;
	int t;
	scanf ("%d", &t);
	while(t--){
		set <ll> s;
		int n, m;
		scanf ("%d %d", &n, &m);
		for (int i = 0; i < n; i++){
			ll a;
			scanf ("%lld", &a);
			s.insert (a);
		}
		for (int i = 0; i < m; i++){
			ll a;
			scanf ("%lld", &a);
			int sz = s.size();
			s.insert (a);
			if (sz != s.size()){
				printf ("NO\n");
			}
			else{
				printf ("YES\n");
			}
		}
	}
	return 0;
}
