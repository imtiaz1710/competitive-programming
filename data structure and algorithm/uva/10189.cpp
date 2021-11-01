#include <iostream>
#include <stdio.h>
using namespace std;
void minesweeper(int n,int m,int t)
{
    if(t>1) cout<<endl;
    char a[n][m];
    int b[n][m]={0};
//    for(int i=0;i<n;i++)
//        for(int j=0;j<m;j++)
//        b[i][j]=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*')
            {
                b[i][j]='*';
                if(i-1>=0 &&  b[i-1][j]!='*' )
                    b[i-1][j]++;
                if(j-1>=0&&b[i][j-1]!='*')
                    b[i][j-1]++;
                if(i-1>=0&&j-1>=0&&b[i-1][j-1]!='*')
                    b[i-1][j-1]++;
                if(i+1<=n-1&&b[i+1][j]!='*')
                    b[i+1][j]++;
                if(j+1<=m-1&&b[i][j+1]!='*')
                    b[i][j+1]++;
                if(i-1>=0 && j+1<=m-1&& b[i-1][j+1]!='*')
                    b[i-1][j+1]++;
                if(i+1<=n-1&&j-1>=0&&b[i+1][j-1]!='*')
                    b[i+1][j-1]++;
                if(i+1<=n-1&&j+1<=m-1&&b[i+1][j+1]!='*')
                    b[i+1][j+1]++;
            }
        }
    }
    printf("Field #%d:\n",t);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(b[i][j]=='*')
            printf("%c",b[i][j]);
           else
            printf("%d",b[i][j]);
        }
        cout<<endl;
    }

}
int main()
{
    int t=0;
    int m,n;

    while(cin>>n>>m)
    {
      if((n==0)&&(m==0))
       break;
      t++;
      minesweeper(n,m,t);
    }
    return 0;
}
