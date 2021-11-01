//My solution of LightOJ 1159 - Batman

#include<bits/stdc++.h>

#define pi acos(-1)
#define eps 1e-9
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define mem(a,b) memset(a,b,sizeof(a))
#define clock 1.0*clock()/CLOCKS_PER_SEC
#define filein freopen("in.txt","r",stdin)
#define fileout freopen("out.txt","w",stdout)
#define fast std::ios::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

int Set(int N, int p){return N|=(1<<p);}
int Reset(int N, int p){return N&=~(1<<p);}
bool Check(int N, int p){return N&(1<<p);}

const int dr[]={0,-1,0,1,-1,-1,1,1};
const int dc[]={1,0,-1,0,1,-1,-1,1};
const int maxx = 0;

string a,b,c;
int dp[51][51][51];

int lcs(int i, int j, int k){
    if(i==a.size() or j==b.size() or k==c.size()) return 0;
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    if(a[i]==b[j] and b[j]==c[k]) return dp[i][j][k]=1+lcs(i+1,j+1,k+1);
    else return dp[i][j][k] = max(max(lcs(i+1,j,k),lcs(i,j+1,k)),lcs(i,j,k+1));
}

int main()
{
//    filein;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        mem(dp,-1);
        printf("Case %d: %d\n",i+1,lcs(0,0,0));
    }
    return 0;
