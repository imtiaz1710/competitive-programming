#include <bits/stdc++.h>

using namespace std;

bool is_set(int x,int y,int n,int board[10][10])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(board[x][i] == 1) {
				return true;
			}


			if (board[i][y] == 1) {
				return true;
			}
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {

            if((x+y==i+j) || ((x-y)==(i-j)))
            {
                if (board[i][j] == 1)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

bool nqueen(int level,int n,int board[10][10])
{
    int j;
    if(level==n)
        return true;
    for(j=0;j<n;j++)
    {
        if(is_set(level,j,n,board))
            continue;
        board[level][j]=1;
        if(nqueen(level+1,n,board))
            return true;
        board[level][j]=0;
    }
    return false;
}
int main()
{
    int n,i,j;
    int board[10][10]={0};
    scanf("%d",&n);
    if(nqueen(0,n,board))
    {
        cout<<"YES"<<endl;
         for( i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("%d ",board[i][j]);
            }
            printf("\n");
        }
    }
    else
        cout<<"NO"<<endl;

    return 0;
}

