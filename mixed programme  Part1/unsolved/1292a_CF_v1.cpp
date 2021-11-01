//unsolved


#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main(){
    freopen("in.txt", "r", stdin);
     freopen("out.txt", "w", stdout);
    int n,q;
    cin>>n>>q;
    int a[3][n+1];
    auto st=high_resolution_clock::now();
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n+1; j++)
        {
            a[i][j]=0;
        }
        
    }
    
    
    for (int i = 0; i < q; i++)
    {
        int x,y;
        cin>>x>>y;
        a[x][y]=(a[x][y]==0)?1:0;
        int k=1;
        int f=0;
        //int brk=0;
        for (int j = 1; j<n; j++)
        {
            if(k==1 && a[k][j+1]==1 )
            {
                if(a[k+1][j]==1)
                {
                    cout<<"NO"<<endl;
                    f=1;
                    break;
                }
                k=2;
                if(a[k][j+1]==1)
                {
                    cout<<"NO"<<endl;
                    f=1;
                    break;
                }

            }

            if(k==2 && a[k][j+1]==1 )
            {
                if(a[k-1][j]==1)
                {
                    cout<<"NO"<<endl;
                    f=1;
                    break;
                }
                k=1;
                if(a[k][j+1]==1)
                {
                    cout<<"NO"<<endl;
                    f=1;
                    break;
                }

            }

            // if (j+1==n && k==1 && a[1][j+1]==0 )
            // {
            //     cout<<"YES"<<endl;
            //     brk=1;
            //     break;
            // }
        }

       // if(brk) continue;
        
            if(!f) cout<<"YES"<<endl;
   
    }
    for (size_t i = 0; i < 1000000000000; i++)
    {
        int a=1+1;
    }
    
    auto en=high_resolution_clock::now();
    auto duration=duration_cast<milliseconds> (en-st);
    cout<<duration.count()<<endl;
    
    return 0;
}