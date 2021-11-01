#include <bits/stdc++.h>
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);

#define ll long long
#define US unsigned short int
#define MP make_pair
#define PLL pair<ll, ll>

#define PB push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define IN(x) cin >> x
#define INN(x, y) cin >> x >> y
#define OU(y) cout << y << " "
#define OUT(x) cout << x << "\n"
#define OUTT(x, y) cout << x << " " << y << "\n"

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define ROF(i, a, b) for (int i = a; i >= b; i--)
#define REP(i, b) for (int i = 0; i < b; i++)
#define MEM(a, x) memset(a, x, sizeof(a))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define SORT(v) sort(v.begin(), v.end())
#define REV(v) reverse(v.begin(), v.end())

using namespace std;

ll dr[] = {-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[] = {0, 0, -1, 1, -1, -1, 1, 1};

int main()
{
    ll a, b;
    INN(a, b);
    if (a == 0)
        a = 1;
    if (b == 0)
        b = 1;
    bool is_five = 0;
    bool is_two = 0;
    ll mul = 1;
    while (b > a and !(is_two and is_five))
    {
        if (b % 2 == 0)
            is_two = 1;
        if (b % 5 == 0)
            is_five = 1;
        mul = (mul * b % 10) % 10;
        b--;
    }
    if (is_two and is_five)
        OUT(0);
    else
        OUT(mul);

    return 0;
}