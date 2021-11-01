#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,m;
    cin>>n>>m;
    string s1[m];
    string s2[m];
    string ans[n];
    for (int i = 0; i < m; i++)
    {
        cin>>s1[i]>>s2[i];
    }
    for (int i = 0; i < n; i++)
    {
        string tmp;
        cin>>tmp;
        for (int j = 0; j < m; j++)
        {
            if(s1[j]==tmp || s2[j]==tmp)
            {
                (s1[j].size()<=s2[j].size())?ans[i]=s1[j] : ans[i]=s2[j];
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}