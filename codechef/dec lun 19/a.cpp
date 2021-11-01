#include <bits/stdc++.h>
using namespace std;


int main(){
   // freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    while (t--)
    {
        vector<char> ch;
        string s;
        cin>>s;
        int cnt=1;
        for (int i = 0; i < s.size(); i++)
        {
           if((i!=s.size()-1) && s[i]==s[i+1])
            {
                cnt++;
                continue;
            }
            ch.push_back(s[i]);
            while (cnt!=0)
            {
                ch.push_back(cnt%10);
                cnt=cnt/10;
            }
            
            cnt=1;  
            
        }
        if(ch.size()<s.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        

    }
    
    return 0;
}