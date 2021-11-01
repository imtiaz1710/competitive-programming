#include <bits/stdc++.h>
 

#define fileout freopen ("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define ___ ios::sync_with_stdio (false); cin.tie (0);
 
using namespace std;
typedef long long ll;
 
const int maxn = 0;
ll mod;

//binary exponentiation
ll power (ll base, ll p){
	cout << base << " " << p << endl;
	if (p == 0) return 1 % mod;
	ll myhalf = power (base, p / 2);
	ll value = (myhalf * myhalf) % mod;
	if (p % 2 == 1) value = (value * base) % mod;
	cout << base << "^" << p << " is " << value << endl;
	return value;
}

//ll power (ll base, ll p){
//	if (p == 0) return 1 % mod;
//	ll x = power (base, p / 2);
//	x = (x * x) % mod;
//	if (p & 1LL) x = (x * base) % mod;
//	return x;
//}

int main(){
	mod = 1;
	cout << power (23748500000000009, 30290000000382) << endl;
	return 0;
}




//(a + b) % c = ((a % c) + (b % c)) % c
//(a - b) % c = ((a % c) - (b % c) + c) % c
//(a * b) % c = ((a % c) * (b % c)) % c
//(a1 * a2) % c = (a1 % c * a2 % c) % c
//(a1a2 * a3) % c = (((a1 % c * a2 % c) % c) * a3 % c) % c

