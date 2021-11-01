#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,tmp;
    cout<<"Please Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Please Enter the array element:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               tmp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=tmp;
            }
        }
    }
    cout<<"The sorted elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
