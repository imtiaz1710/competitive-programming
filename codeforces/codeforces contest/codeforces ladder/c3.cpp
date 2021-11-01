#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    stack <pair<char,int>> st;
    int cnt=0;
  
    vector <int> res;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='(') st.push({s[i],i});
        else if(s[i]==')' and st.size()){
            res.push_back(st.top().second);
            res.push_back(i);
            st.pop();
            cnt+=2;
        }
        if(cnt==k) break;
    }
    sort(res.begin(),res.end());
    for (int i = 0; i < k; i++)
    {
        cout<<s[res[i]];
    }
    
    cout<<endl;
}