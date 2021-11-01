#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    sort(s,s+n);
    char ch='A';
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i][0]==ch)
        {
            cnt++;
            ch++;
        }
        
    }
    cout<<cnt<<endl;
    return 0;
}