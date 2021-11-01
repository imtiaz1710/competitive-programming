#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int p,r;
    int m=10;
    while(cin>>p>>r)
    {
        int two=0,five=0;
        int res=1%m;
        while(r--)
        {
            int tmp=p;
            while(tmp%2==0)
            {
                tmp/=2;
                two++;
            }
            while(tmp%5==0)
            {
                tmp/=5;
                five++;
            }
            res=(res*tmp%m)%m;
            p--;
        }
        int omit=min(two,five);
        two-=omit;
        five-=omit;
        if(two)
        {
            while(two--)
            {
                res=(res*2%m)%m;
            }
        }
        else if(five)
        {
             while(five--)
            {
                res=(res*5%m)%m;
            }
        }
        cout<<res<<endl;

    }
    return 0;
}