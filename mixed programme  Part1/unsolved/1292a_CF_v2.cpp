#include <bits/stdc++.h>
using namespace std;
int a[3][1000008];

int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int n,q;
    cin>>n>>q;
    
   
    
    
    set <int> set1;
    int yes=1;
    for (int i = 0; i < q; i++)
    {
        int x,y;
        cin>>x>>y;
       
        if(x==1)
        {
            if(a[x][y]==0) set1.insert(y);
            else set1.erase(y);
            
        }
        
        a[x][y]=(a[x][y]==0)?1:0;

        int f=0;
        for (auto i = set1.begin(); i!=set1.end(); i++)
        {
            if(a[2][*i-1]==1 || a[2][*i]==1 || a[2][*i+1]==1)
            {
                cout<<"NO"<<endl;
                f=1;
                break;
            }
             
        }
        if(!f) cout<<"Yes"<<endl;
        
        
    }
}