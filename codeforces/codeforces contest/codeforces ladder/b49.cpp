#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

int main()
{
    double n, h;
    cin >> n >> h;
    double area = .5 * 1 * h;
    double add = area / n;
    double a1 = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        a1 += add;
        double h1 = sqrt(a1 / area) * h;
        printf("%.12lf ", h1);
    }
    cout << endl;
    return 0;
}