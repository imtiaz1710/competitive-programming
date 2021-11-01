#include <bits/stdc++.h>
using namespace std;
int dr[]={-1,0,1,0};
int dc[]={0,1,0,-1};
int cnt;
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    int casee=1;
    while (t--)
    {
        bool breakallloops=false;
        cnt=0;
        int n;
        cin>>n;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            
            
            for (int j = 0; j < n; j++)
            {
                bool right=false;
                bool down=false;
                int sum=0;
                bool f=false;
                if(i+dr[0]>=0  && a[i+dr[0]][j]) sum++;
                if(j+dc[1]<n && a[i][j+dc[1]]) sum++,right=true;
                if(i+dr[2]<n && a[i+dr[2]][j]) sum++,down=true;
                if(j+dc[3]>=0 && a[i][j+dc[3]]) sum++;
                if(sum==0) continue;
                if(sum%2!=0 && right && down) 
                {
                    printf("Case %d: %d\n",casee,-1);
                    casee++;
                    breakallloops=true;
                    break;
                }
                else if(sum%2!=0)
                {
                    if(j+dc[1]<n && !a[i][j+dc[1]]) a[i][j+dc[1]]=1,f=true,cnt++;
                    else if(i+dr[2]<n && !a[i+dr[2]][j]) a[i+dr[2]][j]=1,f=true,cnt++;
                }
                if(!f && sum%2!=0) 
                {
                    printf("Case %d: %d\n",casee,-1);
                    casee++;
                    breakallloops=true;
                    break;
                }
            }
            if(breakallloops) break;
            
        }
        if(breakallloops) continue;
        printf("Case %d: %d\n",casee,cnt);
        casee++;
        
    }
    
    return 0;
}