#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    map <string,string> m;
    string str1;
    string str2;
    getline(cin,str1);
    for (int i = 0; i < n; i++)
    {
        
        getline(cin,str1);
        getline(cin,str2);
        //cout<<str1<<endl;
        //cout<<str2<<endl;
        m.insert(make_pair(str1,str2)); 
    }
    int q;
    cin>>q;
    string str3;
    getline(cin,str3);
    while (q--)
    {
        
        getline(cin,str3);
        cout<<m[str3]<<endl;
    }
    
    
    return 0;
}