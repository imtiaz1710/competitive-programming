#include <bits/stdc++.h>
using namespace std;


int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    
    int t;
    cin>>t;
    while(t!=0)
    {
        vector <int> v[t];
        for (int i = 0; i < t; i++)
        {
            for (int j= 0; j < 5; j++)
            {
                int tmp;
                cin>>tmp;
                v[i].push_back(tmp);
            }
            sort(v[i].begin(),v[i].end());
            
        }
        int ans=0;
        int mark[t]={0};
        for (int i = 0; i < t-1 ; i++)
        {
            if(mark[i]) continue;
            mark[i]=1;
           int cnt=1;
           for (int j = i+1; j < t ; j++)
           {
               if(v[i]==v[j])
                cnt++;
           }
           ans=max(ans,cnt);
           
        }
        if(ans==1 || ans==0) cout<<t<<endl;
        else cout<<ans<<endl;
        
        cin>>t;

    }
    return 0;
}