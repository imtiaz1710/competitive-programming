#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    char a[n][m];
    queue <char> qr[n];
    queue<char> qc[m];
    int dot=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.') dot++;
            qr[i].push(a[i][j]);
            qc[j].push(a[i][j]);
        }
    }
    if (k == 1)
    {
        cout << dot<< endl;
        return 0;
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        dot=0;
        while (!qr[i].empty())
        {
            if(qr[i].front()=='.')
            {
                dot++;
            }
            else
            {
                if (dot >= k)
                {
                    ans++;
                    ans+=dot-k;
                }
                dot=0;
            }
            
            qr[i].pop();
        }
        if (dot >= k)
        {
            ans++;
            ans += dot - k;
        }
    }

    for (int i = 0; i < m; i++)
    {
        dot = 0;
        while (!qc[i].empty())
        {
            if (qc[i].front() == '.')
            {
                dot++;
            }
            else
            {
                if (dot >= k)
                {
                    ans++;
                    ans += dot - k;
                }
                dot=0;
            }

            qc[i].pop();
        }
        if (dot >= k)
        {
            ans++;
            ans += dot - k;
        }
    }
    cout<<ans<<endl;
    
    
    
    return 0;
}