#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(pair<string,int> a ,pair<string,int> b)
{
    if(a.second==b.second)
    return a.first<b.first;

    return a.second>b.second;
}

int main(){
    
    int t;
    cin>>t;
    vector <pair<string,int>> v;
    while (t--)
    {
        string str;
        int number;
        cin>>str>>number;
        v.push_back(make_pair(str,number));
    }
    sort(v.begin(),v.end(),cmp);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}