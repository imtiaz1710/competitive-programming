#include <bits/stdc++.h>
using namespace std;
typedef vector <int> vt;
typedef set<int> st;
typedef set<int>::iterator stit;
typedef vt :: iterator vtit;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vt c;
        vt dp;
        dp.resize(k+1,0);
        for(int i=0;i<n;i++)
        {
            int tmp;
            cin>>tmp;
            c.push_back(tmp);
        }
        sort(c.begin(),c.end());
        vtit it;
        
        for (int i = 1; i <=k; i++)
        { 
            
           for (it=c.begin();it!=c.end();it++)
           {
               if(i>=*it)
               {
                   int tmp;
                   tmp=dp[i-*it]+*it;
                   dp[i]=max(tmp,dp[i]);
               }
           }
           
        }
        cout<<dp[k]<<endl;
        
        c.clear();
        dp.clear();

    }
    
    return 0;
}