#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    vector<string> result;
    string palindrome="";
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            string tmp=s[j];
            reverse(tmp.begin(),tmp.end());
            if(s[i]==tmp)
            {
                result.push_back(s[i]);
               
                result.push_back(s[j]);
                s[j]="";
                s[i]="";
                break;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(!s[i].empty())
        {
            string tmp=s[i];
            reverse(tmp.begin(),tmp.end());
            if(tmp==s[i])
            {
                palindrome=s[i];
                break;
            }
        }
    }
    string ans;
    for (int i = 0; i < result.size(); i+=2)
    {
        ans+=result[i];
        result[i]="";
    }
    ans+=palindrome;
    for (int i = result.size()-1; i >= 0; i--)
    {
        if(!result[i].empty())
        ans+=result[i];
    }
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
    return 0;
}