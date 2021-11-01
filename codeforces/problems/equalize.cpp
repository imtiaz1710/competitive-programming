#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector <int> c;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i]) c.push_back(i+1);
    }
    int cnt=0;
    // for (int i = 0; i < c.size(); i++)
    // {
    //     cout<<c[i]<<endl;
    // }
    
    for (int i = 0; i < c.size(); i++)
    {
        if(i<c.size()-1 && a[c[i]-1]!=a[c[i+1]-1] )
        {
            if(c[i+1]-c[i]==1)  cnt++,i++;
            else cnt++;
        }
        else if(i==c.size()-1) cnt++;
        else if(a[c[i]-1]==a[c[i+1]-1]) cnt++;
    }
    cout<<cnt<<endl;
    
    
    return 0;
}