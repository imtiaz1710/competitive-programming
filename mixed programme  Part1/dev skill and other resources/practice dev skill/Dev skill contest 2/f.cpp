#include <bits/stdc++.h>
#define ll long long
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    //fin,fout;
    int tmp;
    vector <int> v;
    while(scanf("%d+",&tmp))
    {

        v.push_back(tmp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    // cout<<scanf("%d+",&tmp)<<endl;
    // cout<<tmp<<endl;
    
    
    return 0;
}