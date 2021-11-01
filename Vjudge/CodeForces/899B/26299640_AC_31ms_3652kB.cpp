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

string s = " 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 29 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 31 28 31 30 31 30 31 31 30 31 30 31 ";

int main()
{
    string str = "";
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        str += " " + to_string(tmp);
    }
    //cout << str << endl;
    ll sz = s.size();
    n=str.size();
    for (ll i = 0; i < sz - n; i++)
    {
       // cout<<s.substr(i,n)<<endl;
        if (str == s.substr(i, n))
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}