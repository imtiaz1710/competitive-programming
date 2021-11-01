#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;

int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> v;
    vector <int> qlty;
    for (int i = 0; i < n; i++)
    {
        int num1,num2;
        cin>>num1>>num2;
        qlty.push_back(num2);
        v.push_back(make_pair(num1,num2));
    }
    sort(v.begin(),v.end());
    sort(qlty.begin(),qlty.end());
    for (int i = 0; i < n; i++)
    {
        if(qlty[i]!=v[i].second)
        {
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    
    cout<<"Poor Alex"<<endl;
    return 0;
}