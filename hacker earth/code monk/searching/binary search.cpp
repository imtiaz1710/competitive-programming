#include <iostream>
using namespace std;
int binarysearch(int a[],int left,int right,int k)
{
    while (left<=right)
    {
        
        int middle=(left+right)/2;
        if(a[middle]<k)
        {
            left=middle+1;
        }
        else if(a[middle]>k)
        {
            right=middle-1;
        }
        else if(a[middle]==k)
        {
            return middle;
        }
    }
    
      return -1;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int  i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    int result=binarysearch(a,0,n-1,k);
    if(result==-1)
    cout<<"Not found!"<<endl;
    else
    {
        cout<<"found"2<<endl;
    }
    

     
}