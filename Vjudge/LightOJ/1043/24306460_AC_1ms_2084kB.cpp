#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
double areax(double ad,double ab,double abc)
{
    ad=ad*ad;
    ab=ab*ab;
    return (ad*abc/ab);
}

int main(){
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        double ab,ac,bc,rt;
        cin>>ab>>ac>>bc>>rt;
        double p=(ab+ac+bc)/2.0;
        double abc=sqrt(p*(p-ab)*(p-ac)*(p-bc));
        double l=0,r=ab;
        double mid;
        int loop=100;
        while(loop--)
        {
            mid=(l+r)/2.0;
            double x=areax(mid,ab,abc);
            double areay=abc-x;

            if (x/rt>areay)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
            
        }
        printf("Case %d: %0.10f\n",++tc,mid);
        
    }
    return 0;
}