#include <bits/stdc++.h>
using namespace std;


int main(){
    //freopen("in.txt","r",stdin);
    int totaldriver;
    int range;
    int rate;
    cin>>totaldriver>>range>>rate;
    while (!(totaldriver==0 && range==0 && rate==0))
    {
        int a[totaldriver];
        int m[totaldriver];
        int e[totaldriver];
        int res=0;
        for(int i=0;i<totaldriver;i++)
        {
            cin>>m[i];
        }
    
        for(int i=0;i<totaldriver;i++)
        {
            cin>>e[i];
            if(m[i]+e[i]>range)
            {
                res+=(m[i]+e[i]-range)*rate;
            }
        }
        cout<<res<<endl;
        cin>>totaldriver>>range>>rate;
    }
    
    return 0;
}