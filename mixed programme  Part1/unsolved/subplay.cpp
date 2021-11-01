#include <bits/stdc++.h>
using namespace std;
int subsplay(string s,int n)
{
    n--;
    int ans=0;
    
    vector<vector<int>> v(26);
    for (int i = 0; i <= n; i++)
    {
        v[s[i]-'a'].push_back(i);
    }
    
    for (int i = 0; i < 26; i++)
    {
        int cnt=0;
        
        if(v[i].size()>1)
        {
            if(v[i].size()==2)
            {
                cnt=v[i][0]+(n-v[i][1])+1;
                
                ans=max(cnt,ans);
            }
            else
            {
                int mn=v[i][1]-v[i][0]-1;
                for (int j = 2; j < v[j].size(); j++)
                {
                    mn=min(mn,v[i][j]-v[i][j-1]-1);
                }
                cnt=n-mn;
                ans=max(cnt,ans);
                
                
            }
            
        }
    }
    return ans;
    
    

}

int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<subsplay(s,n)<<endl;
    }
    
    
    return 0;
}