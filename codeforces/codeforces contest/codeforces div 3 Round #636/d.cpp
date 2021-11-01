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
    fin;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int freq[n][27];
        bool mark[27];
        memset(mark, 0, sizeof mark);
        for (int i = 0; i < 27; i++)
        {
            freq[0][i] = 0;
        }

        cin >> a[0];
        freq[0][a[0]]++;
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            for (int j = 0; j < 27; j++)
            {
                if (j == a[i])
                {
                    freq[i][j] = freq[i - 1][j] + 1;
                }
                else
                {
                    freq[i][j] = freq[i - 1][j];
                }
            }

            // cout<<freq[i][a[i]]<<endl;
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<27;j++)
        //     cout<<freq[i][j]<<" ";

        //     cout<<endl;
        // }
        int ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (!mark[a[i]])
                for (int j = n - 1; j > i; j--)
                {
                    if (a[i] == a[j])
                    {
                        if (i != j - 1)
                        {
                            int mx = 0;
                            for (int k = 0; k <= 26; k++)
                            {
                                if (mx < freq[j - 1][k] - freq[i][k] and k != a[i])
                                    mx = freq[j - 1][k] - freq[i][k];
                            }
                            mx = max(mx, freq[j - 1][a[i]] - freq[i][a[i]]);
                                mx = mx + 2 ;

                            if (ans < mx)
                                ans = mx;
                        }
                        else
                            ans = max(2, ans);

                        mark[a[i]] = 1;
                        break;
                    }
                }
        }
        cout << ans << endl;
    }

    return 0;
}