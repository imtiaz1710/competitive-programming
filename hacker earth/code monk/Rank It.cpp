#include <bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int left,int right,int k)
{
    while (left<=right)
    {
        
        int middle = (left+ right) >> 1;;
        if(a[middle]<k)
        {
            left=middle+1;
        }
        else if(a[middle]>k)
        {
            right=middle-1;
        }
        else 
        {
            return middle;
        }
    }
    
      return -1;
}
int main()
{
    int n,q,x;
    cin>>n;
    int a[n];
    for (int  i = 0; i <n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cin>>x;
        cout<<binarysearch(a,0,n-1,x)+1<<endl;
    }
    
    
    
    
     
}