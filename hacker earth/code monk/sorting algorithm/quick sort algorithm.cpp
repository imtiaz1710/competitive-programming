#include <iostream>
using namespace std;
int prtition(int arr[],int low,int high);
void quicksort(int arr[],int low,int high)
{
    if(low>=high)
        return;
    int p;
    p=prtition(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
}
int prtition(int arr[],int low,int high)
{
    int t;
    int pivot=high;
    int i,j;
    for(i=low,j=low-1;i<=high;i++)
    {
        if(arr[i]<arr[pivot])
        {
            j=j+1;
            t=arr[j];
            arr[j]=arr[i];
            arr[i]=t;
        }

    }
        t=arr[j+1];
        arr[j+1]=arr[pivot];
        arr[pivot]=t;
        return j+1;
}
int main()
{
    int n;
    cout<<"please enter the array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Input the array element: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"after sorting the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
