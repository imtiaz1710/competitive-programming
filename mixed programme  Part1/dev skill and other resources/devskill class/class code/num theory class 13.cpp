#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 1e4;

int marked[maxn];
vector <int> primes;
vector <int> ppf;

void sieve (int n){
	int sq = sqrt (n);
	marked[0] = marked[1] = 1;
	for (int i = 4; i <= n; i += 2)
		marked[i] = 1;
	for (int i = 3; i <= sq; i += 2){
		for (int k = i * i; k <= n; k += i + i)
			marked[k] = 1;
	}
	for (int i = 1; i <= n; i++)
		if (!marked[i])
			primes.push_back (i);
}

void divcount (int a){
	int sqa = sqrt (a);
	int div_count = 1;
	for (int i = 0; i < primes.size() && primes[i] <= sqa; i++){
		if (a % primes[i] == 0){
			int k = 0;
			while (a % primes[i] == 0){
				a /= primes[i];
				k++;
			}
			div_count *= (k + 1);
		}
	}
	if (a > 1) div_count *= 2;
	dbg (div_count);
}

void divsum (int a){
	//implement this
}

int main(){
	sieve (1000);
	return 0;
}

//Prime Power Factorization
//12 = 2^2 * 3
//30 = 2 * 3 * 5
//
//60 = 2^2 * 3 * 5
