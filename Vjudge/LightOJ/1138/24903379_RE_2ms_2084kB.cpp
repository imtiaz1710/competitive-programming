#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn (int)1e8+1
#define maxloop (int)5e8
using namespace std;
vector<int> arr(maxn,0);

void fun()
{
    for(int i=5;i<maxloop;i+=5)
    {
        int pow=5;
        int tmp=1;
        int zero=0;
        while(tmp)
        {
            tmp=i/pow;
            zero+=tmp;
            pow*=5;
            if(pow>i) break;
        }
        if(zero>=maxn) break;
        arr[zero]=i;
    }
}
int main(){
    
    fun();
    int t;
    int tc=0;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(arr[n])
        {
            printf("Case %d: %d\n",++tc,arr[n]);
        }
        else
        {
            printf("Case %d: impossible\n",++tc);
        }
    }
    
    return 0;
}