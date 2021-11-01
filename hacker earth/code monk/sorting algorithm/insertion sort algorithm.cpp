//insertion sort algorithm
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,x,item,index;

    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        index=i-1;
        item=a[i];
        while(index>=0 && a[index]>item)
        {
            a[index+1]=a[index];
            index--;
        }
        if(index!=i-1)
        {
            a[index+1]=item;
        }

    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;

}

