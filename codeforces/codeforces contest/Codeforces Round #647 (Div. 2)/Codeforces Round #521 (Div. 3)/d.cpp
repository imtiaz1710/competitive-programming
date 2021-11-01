#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 1000000
using namespace std;

int n,k;
int freq[maxn];
int a[maxn];

bool is_true(int mid)
{
    int cnt=0;
    for (int i = 0; i < maxn; i++)
    {
        cnt+=freq[i]/mid;
    }
    if(cnt>= k) return true;

    return false;
}

void print(int ans)
{
    int cnt = 0;
    for (int i = 0; i < maxn; i++)
    {
        int amount = freq[i] / ans;
        if (cnt + amount > k)
        {
            amount -= cnt + amount - k;
        }
        cnt += amount;
        while (amount--)
        {
            cout << i << " ";
        }
        if (cnt == k)
            break;
    }
    cout << endl;
}

int main(){
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    int l=1,r=n;
    int m;
    int ans;
    while (l<=r)
    {
        m=(l+r)/2;
        if(is_true(m))
        {
            l=m+1;
            ans=m;
        }
        else {
            r=m-1;
        }
    }
    print(ans);
    return 0;
}