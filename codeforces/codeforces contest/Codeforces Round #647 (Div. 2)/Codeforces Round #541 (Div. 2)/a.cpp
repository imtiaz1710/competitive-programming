#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;


int main(){
    
    int w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    cout<<max(w1,w2)*2+(h1+h2)*2+4<<endl;
    return 0;
}