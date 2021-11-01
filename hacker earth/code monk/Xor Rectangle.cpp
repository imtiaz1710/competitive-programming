#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,nq,c;
    int q[4];
    cin>>n;
    int a[n];
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=a[i]^a[j];
        }
    }
    cin>>nq;
    while(nq--)
    {
        c=0;
       for(int i=0;i<4;i++)
        {
            cin>>q[i];
            q[i]--;
        }
        for(int i=q[0];i<=q[2];i++)
        {
            for(int j=q[1];j<=q[3];j++)
            {
                c=c+matrix[i][j];
            }
        }
        cout<<c<<endl;
    }

}
