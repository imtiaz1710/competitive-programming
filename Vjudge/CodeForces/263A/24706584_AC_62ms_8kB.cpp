#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int a[6][6];
    int midi=3;
    int midj=3;
    int tmpi,tmpj;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
           cin>>a[i][j];
           if(a[i][j]==1)
           {
               tmpi=i;
               tmpj=j;
           }
            
        }
        
    }
    cout<<abs(tmpi-midi)+abs(tmpj-midj)<<endl;
    return 0;
}