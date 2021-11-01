#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ll n;
    list <ll> li;
    while (cin>>n)
    {
        li.push_back(n);
    }
    while (!li.empty())
    {
        
       ll tmp=li.front();
       int cnt=0;
       for (auto i = li.begin(); i!=li.end(); i++)
       {
           if(*i==tmp) cnt++;
       }
       li.remove(tmp);
       cout<<tmp<<" "<<cnt<<endl;
        
    }
    
    
    return 0;
}