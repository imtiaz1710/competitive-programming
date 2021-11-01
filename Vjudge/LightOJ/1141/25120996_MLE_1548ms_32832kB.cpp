#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt", "w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define us unsigned short int
using namespace std;
vector<us> cur_prime;
unsigned char dis[1001];
us sieve[] = {2,
              3,
              5,
              7,
              11,
              13,
              17,
              19,
              23,
              29,
              31,
              37,
              41,
              43,
              47,
              53,
              59,
              61,
              67,
              71,
              73,
              79,
              83,
              89,
              97,
              101,
              103,
              107,
              109};









void prime(us n)
{
   bool is_change=0;
   // us sq = sqrt(n);
    for (us i = 0; sieve[i]*sieve[i]<=n; i++)
    {
        if (n % sieve[i] == 0){
            while (n % sieve[i] == 0)
            {
                n /= sieve[i];
                is_change = 1;
            }
            cur_prime.push_back(sieve[i]);
        }      
    }
    if (n > 1 && is_change)
        cur_prime.push_back(n);
}

int main()
{
    us t;
    scanf("%hd", &t);
    us tc = 0;
    while (t--)
    {

        us start, stop;
        scanf("%hd%hd", &start, &stop);
        if (start == stop)
        {
            printf("Case %hd: %d\n", ++tc, 0);
            continue;
        }

        queue<us> q;
        q.push(start);
        bool loop_break = 0;
        while (!q.empty())
        {

            us tmp = q.front();
            q.pop();
            cur_prime.clear();
            prime(tmp);
            for (us i = 0; i < cur_prime.size(); i++)
            {

                us new_val = tmp + cur_prime[i];

                if (new_val <= stop)
                {
                    q.push(new_val);
                    dis[new_val] = dis[tmp] + 1;
                    if (new_val == stop)
                    {
                        loop_break = 1;
                        break;
                    }
                }
            }
            if (loop_break)
                break;
        }
        if (dis[stop])
            printf("Case %hd: %hd\n", ++tc, dis[stop]);
        else
            printf("Case %hd: %hd\n", ++tc, -1);
        memset(dis, 0, sizeof dis);
    }

    return 0;
}