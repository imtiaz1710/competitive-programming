#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,tmp,minindex;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
               minindex=j;
            }
        }
        if(minindex!=i)
            {
            tmp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=tmp;
            }

    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";


}
