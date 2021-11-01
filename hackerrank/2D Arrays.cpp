#include <iostream>
using namespace std;
int main()
{
    int arr[6][6];
    int i,j,sum;
    int mx;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>mx||(i==0&&j==0))
         mx=sum;
        }
    }
    cout<<mx<<endl;
    return 0;
}
