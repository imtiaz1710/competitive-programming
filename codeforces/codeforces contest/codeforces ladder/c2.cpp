#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1){
        cout<<"NO"<<endl;
        return 0;
    }
    stack <char> st;
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')' and st.size()!=0) st.pop();
        else cnt++;
    }
   
    if((st.empty() and cnt<2) or (cnt==1 and st.size()==1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
}