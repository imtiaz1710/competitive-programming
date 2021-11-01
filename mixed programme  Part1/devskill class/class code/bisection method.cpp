//
//#define filein freopen ("in.txt", "r", stdin)
//#define fileout freopen ("out.txt", "w", stdout)
//#define dbg(x) cerr << #x << ": " << x << endl
//#define ___ ios::sync_with_stdio (false); cin.tie (0);
//
//using namespace std;
//typedef long long ll;
//
//const int maxn = 0;
//
////bisection method
//int main(){
//	//cube root of two
//	double L = 0, R = 2;
//	double mid;
//	for (int i = 0; i < 100; i++){
//		mid = (L + R) / 2;
//		if (mid * mid > 2)
//			R = mid;
//		else L = mid;
//	}
//	printf ("%.10f\n", mid);
//	return 0;
//}


#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 1e7 + 10;

int arr[maxn];

bool ok (int mid, int n){
	int energy = mid;
	for (int i = 0; i < n; i++){
		int jumpDiteHobe;
		if (i == 0) jumpDiteHobe = arr[0];
		else jumpDiteHobe = arr[i] - arr[i - 1];
		//cout << "jump " << jumpDiteHobe << " " << energy << endl;
		if (energy < jumpDiteHobe) return false;
		if (energy == jumpDiteHobe)
			energy--;
	}
	return true;
}

int main(){
	filein;
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		int lo = 0, hi = 100000;
		int ans = -1;
		while (lo <= hi){
			int mid = (lo + hi) / 2;
			if (ok (mid, n)){
				ans = mid;
				hi = mid - 1;
			}
			else lo = mid + 1;
		}
		cout << ans << endl;
	}
	return 0;
}
