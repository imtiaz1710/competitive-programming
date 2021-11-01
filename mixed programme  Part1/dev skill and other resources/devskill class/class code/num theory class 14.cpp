#include <bits/stdc++.h>
 
#define filein freopen ("in.txt", "r", stdin)
#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;

int how_many (int n, int prime){ //n = 125, p = 5
	int res = 0;
	int pwr = prime; //prime^4
	while (1){
		int d = (n / pwr);
		if (d > 0){
			res += d;
			pwr *= prime;
		}
		else break;
	}
	return res;
}

int main(){
	cout << how_many (125, 5) << endl;
	return 0;
}

//Euler's Theorem
//Fermat's Little Theorem
(b^-1) mod m is equivalent to bigmod(b, m - 2) mod m
b and m must be coprime, gcd(b,m) = 1

for (int i = 1; i <= n; i++){
	invfact[i] = (invfact[i - 1] * bigmod (i, m - 2)) % m;
}
