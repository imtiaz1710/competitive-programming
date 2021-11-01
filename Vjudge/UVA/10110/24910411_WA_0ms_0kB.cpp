#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    scanf("%d",&n);
    while(n){
    int sr=sqrt(n)+1;
    int div_count=1;
    for(int i=2;i<=sr;i++)
    {
        int pow_count=0;
        while(n%i==0)
        {
            n/=i;
            pow_count++;
        }
        div_count*=pow_count+1;
        if(n==1) break;
    }
    if(n>1) div_count*=2;
    //cout<<div_count<<endl;
    if(div_count%2==0)
        printf("no\n");
    else
        printf("yes\n");
    scanf("%d",&n);
    }
    return 0;
}