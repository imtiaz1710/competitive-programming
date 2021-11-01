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
bool is_true(int w1, int w2, int lowest, int highest)
{
    bool a = (lowest <= w1 and w1 <= highest) or (lowest <= w2 and w2 <= highest);
    bool b = (w1 <= lowest and w2 >= lowest) or (w1 <= highest and w2 >= highest);
    return a or b;
}

int main()
{
    //fin, fout;
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        int l = a - b;
        int r = a + b;
        int w1 = c - d;
        int w2 = c + d;
        int lowest = l * n;
        int highest = r * n;
        if (is_true(w1, w2, lowest, highest))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}