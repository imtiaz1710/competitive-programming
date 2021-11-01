#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    bool x[1000][1000]={false};
    for (int i = 0; i < m; i++)
    {
        int a,b;
        cin>>a>>b;
        x[a][b]=true;
        x[b][a]=true;
        
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int a,b;
        cin>>a>>b;
        if(x[a][b]==true)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        

    }
    
    return 0;
}