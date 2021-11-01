#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
 int is_pos(int a,int b,int c)
{
    double p=(a+b+c)/2.0;
    double s=p*(p-a)*(p-b)*(p-c);
    //cout<<s<<endl;
    if(a==b+c)
    {
        
        return 2;
    }
    if(s<0)
    {
       
        return 0;
    }
    return 1;
}

int main(){
    int a[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    reverse(a,a+4);
    int x=is_pos(a[0],a[1],a[2]);
    int y=is_pos(a[0],a[1],a[3]);
    int z=is_pos(a[0],a[2],a[3]);
    int zz=is_pos(a[1],a[2],a[3]);
    if(x==1 || y==1 || z==1 || zz==1)
    cout<<"TRIANGLE"<<endl;
    else if(x==2 || y==2 || z==2 || zz==2)
    cout<<"SEGMENT"<<endl;
    else
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    
    
    return 0;
}