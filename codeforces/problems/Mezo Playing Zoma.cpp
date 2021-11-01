#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    string s;
    cin>>s;
    int l=0;
    int r=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='L') l++;
        else r++;
    }
    cout<<l+r+1<<endl;

    return 0;
}