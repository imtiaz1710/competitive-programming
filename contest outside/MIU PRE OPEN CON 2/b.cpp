//b 

#include <bits/stdc++.h>
#define gray 1
#define black 2
using namespace std;
int cnt=0;
void dfs(vector<vector<int>> &v,int x,vector <int> &marked)
{
    marked[x]=black;
    
    for (int i = 0; i < v[x].size(); i++)
    {
        if(marked[v[x][i]]==gray)
        dfs(v,v[x][i],marked);
        
    }
    
}
int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}
int main(){
  // freopen("in.txt","r",stdin);
 // freopen("ou.txt","w",stdout);
    int t;
    scanf("%d",&t);
    int casee=0;
    while (t--)
    {
        int numberofone=0;
        casee++;
        cnt=0;
        
        int n;
        scanf("%d",&n);
        int a[n];
        int hight=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==1) numberofone++;
            if(a[i]>hight) hight=a[i];

        }
        vector <vector<int>> v(hight+1);
        vector <int> marked(hight+1,0);
        marked[a[0]]=gray;
       
        for (int i = 0; i < n-1; i++)
        {
           
            marked[a[i+1]]=gray;
            for (int j = i+1; j < n; j++)
            {
                if(gcd(a[i],a[j])>1)
                {
                    v[a[i]].push_back(a[j]);
                    v[a[j]].push_back(a[i]);
                }

            }
            
            
        }
        for (int i = 0; i <= hight; i++)
        {
            
            if(marked[i]==gray)
            {
                cnt++;
                dfs(v,i,marked);
            }
        }
    
        if(numberofone>1)
        cnt=cnt+numberofone-1;
        printf("Case %d: %d\n",casee,cnt);
        
    }
    

    return 0;
}