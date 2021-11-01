#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define white 1
#define red 2
#define blue 3
#define maxn 400
using namespace std;
int n;
int cnt=0;
int color[maxn];

void flags(int id,int prev)
{
    if(id==n)
    {
        cnt++;
        return;
    }
    if(prev==white)
    {
        flags(id+1,blue);
        flags(id+1,red);
    }
    else if(prev==red)
    {
        flags(id+1,white);
    }
    else
    {
        if(prev==white)
        flags(id+1,)
    }
    
}
int main(){
    cin>>n;

    return 0;
}