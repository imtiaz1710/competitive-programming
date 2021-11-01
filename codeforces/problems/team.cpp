#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    cin>>n;
    int ans=0;
    while (n--)
    {
        int cnt=0;
        
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin>>x;
            if(x) cnt++;
        }
        if(cnt>=2) ans++;
        
    }
    cout<<ans<<endl;
    
    return 0;
}