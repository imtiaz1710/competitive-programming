#include <bits/stdc++.h>
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);

using namespace std;
typedef long long ll;

const int maxn = 0;

int a[] = {2, 3, 4, 7, 9, 10, 11, 14, 15, 16};

int main(){
	int element = 13;
	int L = 0, R = 9;
	while(L <= R){
		int mid = (L + R) / 2;
		if (a[mid] == element){
			cout << "found" << endl;
			break;
		}
		else if (a[mid] < element){
			L = mid + 1;
		}
		else R = mid - 1;

	}
	cout << "not found" << endl;
	return 0;
}



#include <bits/stdc++.h>

#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);

using namespace std;
typedef long long ll;

const int maxn = 0;

int a[] = {2, 3, 4, 7, 9, 10, 11, 14, 15, 16};

int main(){
	int element = 17;
	int L = 0, R = 9;
	int ans = -1;
//	while(L <= R){
		int mid = (L + R) / 2;
		if (a[mid] >= element){
			ans = a[mid];
			R = mid - 1;
		}
		else L = mid + 1;
	}
	cout << ans << endl;
	return 0;
}

//bisection method
//sqrt (2)
//
//L = 0, R = 2
//mid = 1
//square (1) = 1
//L = 1, R = 2
//mid = 1.5
//square (1.5) = 2.25
//L = 1, R = 1.5
//mid = 1.25
//square (1.25) = 1.56
//L = 1.25, R = 1.5
//
//f(x) = x^2
//
//x1 < x2 < x3
//sqr (x1) < sqr (x2) < sqr (x3)
