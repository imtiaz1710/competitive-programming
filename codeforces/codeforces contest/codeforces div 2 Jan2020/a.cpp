#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n,s,k;
    int t;
    cin>>t;
    while (t--)
    {
            cin>>n>>s>>k;
            map <int,int> m;
            
            
            for (int i = 0; i < k; i++)
            {
                int tmp;
                cin>>tmp;
                m[tmp]=true;
            }
            for (int i = 0; i < n; i++)
            {
                if(!m[s+i] && s+i<=n){
                    cout<<i<<endl;
                    break;
                }
                if(!m[s-i] && s-i>=1){
                    cout<<i<<endl;
                    break;
                }
            }
    
        
    }
    
    return 0;
}