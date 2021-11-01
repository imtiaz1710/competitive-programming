#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }

        }
        int cnt=0;
        for(int i=0;i<n*n;i++)
        {
            for(int j=0;j<n*n;j++)
            {
                for(int k=i;k<n;k++)
                {
                    for(int l=j;l<n;l++)
                    {
                        if(a[i][j]>a[k][l])
                        cnt++;
                    }
                }
            }

        }
        cout<<cnt<<endl;
    }

}
