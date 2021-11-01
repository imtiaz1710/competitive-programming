#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define mx (int)2e7+9
#define arr_size (int)1e5+9
using namespace std;
vector <int> res;
bool mark[mx+1];
void prime()
{
    mark[0]=mark[1]=1;
    for (int i =4 ; i <=mx; i+=2)
    {
        mark[i]=1;
    }
    for (int i=3;i*i<=mx;i+=2)
    {
        for(int j=i*i;j<=mx;j+=i+i)
        {
            mark[j]=1;
        }
    }
    for(int i=0;i<=mx;i++)
    {
        if(!mark[i])
        {
            if(!mark[i+2])
            {
                res.push_back(i);
            }
        }
    }
}
int main(){
    prime();
    int n;
    while (cin>>n)
    {
        printf("(%d, %d)\n",res[n-1],res[n-1]+2);
    }
    return 0;
}