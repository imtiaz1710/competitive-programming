#include <bits/stdc++.h>
#define ll long long
#define fin freopen("in.txt", "r", stdin)
#define fout freopen("out.txt","w", stdout)
#define dbg(x) cerr << #x << ": " << x << endl
#define fastio ios::sync_with_stdio (false); cin.tie (0);
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}

int main(){
    string s;
    cin>>s;
    int array_size=s.size();
    int asc[array_size];
    int des[array_size];
    for (int i = 0; i < array_size; i++)
    {
        asc[i]=(int)(s[i]-'0');
    }
    sort(asc,asc+array_size,cmp);
    for (int i = array_size-1; i>=0; i--)
    {
       des[array_size-1-i]=asc[i];
      // cout<<des[array_size-1-i];
    }
   // cout<<endl;
    stringstream ss;
    for (int i:asc) 
    {
        ss<<i;
    }
    ll num1,num2;
    ss>>num1;
    
    stringstream ss1;
    for (int i:des)  {
        ss1<<i;
    }
    
    ss1>>num2;
    ll res=(num1-num2);
    res*=res;
    cout<<res<<endl;
    //cout<<num1<<endl;
   // cout<<num2<<endl;
    return 0;
}