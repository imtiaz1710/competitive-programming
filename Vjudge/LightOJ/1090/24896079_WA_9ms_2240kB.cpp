#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
int n,r,p,q;
int first_part()
{
    int upper,lower;
    int pow=5;
    upper=0;
    int tmp=1;
    while(tmp)
    {
        tmp=n/pow;
        upper+=tmp;
        pow*=5;
    }
    
    pow=5;
    tmp=1;
    lower=0;
    while (tmp)
    {
        tmp=r/pow;
        lower+=tmp;
        pow*=5;
    }

    int n_minus_r=n-r;
    pow=5;
    tmp=1;
    while (tmp)
    {
        tmp=n_minus_r/pow;
        lower+=tmp;
        pow*=5;
    }

    if(upper-lower<0)
        return 0;
    else 
        return upper-lower;

}

int second_part()
{
    int two,five;
    two=five=0;
    int tmp=p;
    while(tmp%2==0)
    {
        tmp/=2;
        two++;
    }
    while (tmp%5==0)
    {
        tmp/=5;
        five++;
    }
    if(two<five) return two*q;
    else return five*q;
}
int main(){
    fastio
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        cin>>n>>r>>p>>q;
        printf("Case %d: %d\n",++tc,first_part()+second_part());
    }
    return 0;
}