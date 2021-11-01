#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b) swap(a,b);
    if(a>c) swap(a,c);
    if(b>c) swap(b,c);
    if(a+b+1>=c) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
    
    
    return 0;
}
