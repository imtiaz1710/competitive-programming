#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;

bool marked[2000001]; //if true -> non prime

int main(){
	int n = 200000;
	marked[0] = true;
	marked[1] = true;
	//cout << "for " << 2 << endl;
	for (int i = 4; i <= n; i += 2){
		//cout << i << " ";
		marked[i] = true;
	}
	//cout << endl;
	int sqn = sqrt (n);
	for (int i = 3; i <= sqn; i += 2){
		//cout << "for " << i << endl;
		if (marked[i] == false){
			for (int j = i * i; j <= n; j += (2*i)){
				//cout << j << " ";
				marked[j] = true;
			}
			//cout << endl;
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++){
		if (!marked[i]) cnt++;
	}
	cout << 1e9/log(1e9) << endl;
	//cout << "cnt " << cnt << endl;
	return 0;
}

//(n/2) + (n/3) + (n/5) + ... + upto largest prime below n
//O(nlglgn)

// n = 100
// from 2 to (n-1) -> 98
// from 2 to (n/2) -> 49
// from 2 to (sqrt (n)) -> 9
// Sieve of Eratosthenes
