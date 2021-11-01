#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
int cd,cm,cy,bd,bm,by;
bool invalid()
{
    if(by>cy)
    return 1;
    if(by==cy)
    {
        if(bm>cm) return 1;
        if(bm==cm)
        {
            if(bd>cd) return 1;
        }
    }
    return 0;
}
int calculate()
{
    int age=cy-by;
    if(cm<bm)
    {
        return age-1;
    }
    // cout<<cd<<endl;
    // cout<<bd<<endl;
    // cout<<cm<<endl;
    // cout<<bm<<endl;
    if(cm==bm)
    {
        if(cd<bd) return age-1;
    }
    return age;
}
bool check()
{
    if(calculate()>130)
        return 1;
    return 0;
}

bool zero()
{
    if(bd==cd && bm==cm && by==cy) return 1;
    return 0;
}


int main(){
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        scanf("%2d/%2d/%4d",&cd,&cm,&cy);
        scanf("%2d/%2d/%4d",&bd,&bm,&by);
        if(invalid())
        {
            printf("Case #%d: Invalid birth date\n",++tc);
        }
        else if (check())
        {
            printf("Case #%d: Check birth date\n",++tc);
        }
        else if (zero())
        {
            printf("Case #%d: 0\n",++tc);
        }
        else
        {
            printf("Case #%d: %d\n",++tc,calculate());
        }

            
        

    }
    return 0;
}