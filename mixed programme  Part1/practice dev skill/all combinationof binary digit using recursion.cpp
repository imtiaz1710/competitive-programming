#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define maxn 1000
using namespace std;
int n;
vector<string> v;
void bin(string str, int id)
{
    if (id == n)
    {
        v.push_back(str);
        return;
    }
    bin(str + '0', id + 1);
    bin(str + '1', id + 1);
}

int main()
{
    fout;
    cin >> n;
    bin("", 0);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}