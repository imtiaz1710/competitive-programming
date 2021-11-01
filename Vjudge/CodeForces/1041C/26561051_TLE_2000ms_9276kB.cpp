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
#define FS first
#define SD second
#define MOD (1000000000 + 7)
#define PLL pair<ll, ll>

#define PB push_back
#define LN cout << "\n"
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
#define PA(v)        \
    for (ll tmp : v) \
    cout << tmp << " "

using namespace std;

ll dr[] = {-1, 1, 0, 0, -1, 1, -1, 1};
ll dc[] = {0, 0, -1, 1, -1, -1, 1, 1};

int main()
{
    ll n, m, d;
    INN(n, m);
    IN(d);
    vector<ll> a(n);
    vector <ll> b(n);
    for (ll i = 0; i < n; i++)
    {
        IN(a[i]);
    }
    b=a;
    SORT(a);
    map <ll,ll> mark;
    bool flag = 1;
    ll day = 0;
    while (flag)
    {
        day++;
        flag = 0;
        bool first_pass=0;
        for (ll i = 0; i < n - 1 ; i++)
        {
            
            if(first_pass==0 and mark[a[i]]) continue;
            bool change=0;
            for (ll j = i + 1; j < n; j++)
            {
                if (mark[a[j]])
                    continue;
                ll dif = a[j] - a[i] - 1;
                if (dif >= d)
                {
                    mark[a[i]] = day;
                    mark[a[j]]=day;
                    flag = 1;
                    i = j-1 ;
                    first_pass=1;
                    change=1;
                    break;
                }
            }
            if(first_pass==0 or change==0) break;

        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (mark[a[i]] == 0)
        {
            mark[a[i]] = day;
            day++;
        }
    }
    cout<<day-1<<endl;
    for (ll i = 0; i < n; i++)
    {
        OU(mark[b[i]]);
    }
    LN;

    return 0;
}