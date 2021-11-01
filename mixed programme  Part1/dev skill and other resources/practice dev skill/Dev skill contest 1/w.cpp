#include <bits/stdc++.h>
using namespace std;


int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int m,n;
    cin>>m>>n;
    map <string,int> mp;
    while (m--)
    {
        string str;
        int dolr;
        cin>>str>>dolr;
        mp.insert(make_pair(str,dolr));
    }
    while (n--)
    {
        int cnt=0;
        string str1;
        cin>>str1;
       
        while(str1!=".")
        {
             cnt+=mp[str1];
             cin>>str1;
            
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}
