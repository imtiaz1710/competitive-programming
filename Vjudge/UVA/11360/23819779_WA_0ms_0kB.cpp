#include <bits/stdc++.h>
using namespace std;
const int size=10;
int n;
void col(int a[size][size])
{
    int x,y;
    cin>>x>>y;
    x--;
    y--;
    for (int i = 0; i < n; i++)
    {
        swap(a[i][x],a[i][y]);
    }
}

void row(int a[size][size])
{
    int x,y;
    cin>>x>>y;
    x--;
    y--;
    for (int i = 0; i < n; i++)
    {
        swap(a[x][i],a[y][i]);
    }
}
void inc(int a[size][size])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]=(a[i][j]+1)%10;
        }
        
    }
    
}
void dec(int a[size][size])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j]=(a[i][j]-1)%10;
        }
        
    }
    
}
void trans(int a[size][size])
{
    int b[size][size];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[j][i]=a[i][j];
            
        }
        
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
          a[i][j]=b[i][j];
            
        }
    }
    
}
int main(){
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t;
    cin>>t;
    int tc=0;
    while (t--)
    {
        cin>>n;
        int a[size][size];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%1d",&a[i][j]);
            }
            
        }
        int m;
        cin>>m;
        for (int i = 0; i < m; i++)
        {
            string str;
            cin>>str;
           
            if(str=="col") 
                col(a);
            else if(str=="row")
                row(a);
                
            else if(str=="inc")
                inc(a);

            else if(str=="dec")
                dec(a);
            else if(str=="transpose")
                trans(a);
        }
        printf("Case #%d\n",++tc);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
        
        }
    
    return 0;
}