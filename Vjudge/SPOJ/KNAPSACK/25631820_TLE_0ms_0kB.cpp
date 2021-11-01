#include <bits/stdc++.h>
#define ll long long
#define us unsigned short int
#define fin freopen("/home/imtiaz/Desktop/in.txt", "r", stdin)
#define fout freopen("/home/imtiaz/Desktop/out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
#define maxn 3000
using namespace std;
int capacity, n;
int size[maxn],val[maxn];

int knapsack(int id,int total)
{
    if(id==n) return 0;
    int nibo=0;
    int nibona=0;
    if(total+size[id]<=capacity) 
        nibo=val[id]+knapsack(id+1,total+size[id]);
    nibona=knapsack(id+1,total);

    return max(nibo,nibona);
}

int main(){
  //  fin;
    cin>>capacity>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>size[i]>>val[i];
    }
    cout<<knapsack(0,0)<<endl;
    return 0;
}