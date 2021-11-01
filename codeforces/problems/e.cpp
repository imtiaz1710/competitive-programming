#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n;
    string s;
    cin>>n>>s;
    char ch1='a',ch2='a';
    string result;
    bool f=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]>=ch1)
        {
            ch1=s[i];
            result+='0';
        }
        else if(s[i]>=ch2)
        {
            ch2=s[i];
            result+='1';
        }
        else
        {
            f=1;
            break;
        }
        
        
    }
    if(f)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<result<<endl;
    }
    
    
    return 0;
}