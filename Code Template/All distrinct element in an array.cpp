#include <iostream>
#include <algorithm>
using namespace std;


int countunique(int a[],int start,int end)
{
    int arraysize=end-start+1;
    int b[arraysize];
    int i,j;
    int tmpsize=1;
    b[0]=a[start];
    for (i = start+1; i <= end; i++)
    {
        for (j = 0; j <tmpsize; j++)
        {
            if(a[i]==b[j])
            break;
        }
        if(j==tmpsize)
        {
            tmpsize++;
            b[tmpsize-1]=a[i];
        }
        
        
    }
    for (int i = 0; i < tmpsize; i++)
    {
        cout<<b[i]<<" ";
    }

    cout<<endl;

    return tmpsize;
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<countunique(a,0,n-1)<<endl;    
    
}
