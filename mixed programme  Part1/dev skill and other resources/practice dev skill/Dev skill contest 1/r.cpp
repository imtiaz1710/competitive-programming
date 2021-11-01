#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;

int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    map <pi,string> m;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        string str1;
        cin>>str1;
        //m.insert(make_pair(make_pair(a,b),str1));
        m[make_pair(a,b)]=str1;
    }
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        
        cout<<m[make_pair(a,b)]<<endl;
    }
    
    
    return 0;
}