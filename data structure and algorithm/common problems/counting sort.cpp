#include <iostream>
using namespace std;
int countingsort(int a[],int n,int c)
{
    int temp[c+1]={0};
    int j=0;
    for(int i=0;i<n;i++)
    {
        temp[a[i]]++;
    }
    cout<<"After sorting :"<<endl;
    for(int i=0;i<=c;i++)
    {
        while(temp[i]!=0)
        {
            cout<<i<<" ";
            temp[i]--;
        }
    }
}
int main()
{
    int n;
    int c;
    cout<<"Give the size for array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Input the element for array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Input the highest value: "<<endl;
    cin>>c;
    countingsort(a,n,c);
}
