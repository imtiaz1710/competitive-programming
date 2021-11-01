#include <iostream>
using namespace std;
long cnt=0;
void mergesort(int a[],int l,int m,int r)
{
    int temp[r-l+1];
    int i,j,k;
    i=l,j=m+1,k=0;
    while(i<=m&&j<=r)
    {
        if(a[i]<=a[j]) {
            temp[k++]=a[i++];

        }
        else if(a[i]>a[j])
        {
        temp[k++]=a[j++];
            cnt+=(m-i+1);
        }


    }

    while(i<=m)
    {
            temp[k++]=a[i++];

    }
    while(j<=r)
    {
            temp[k++]=a[j++];

    }
    k=0;
    for(i=l;i<=r;i++)
        a[i]=temp[k++];
}
void mrge(int a[],int l,int r)
{
    if(l>=r)
        return;

        int m;
        m=(l+r)/2;
        mrge(a,l,m);
        mrge(a,m+1,r);
        mergesort(a,l,m,r);

}


int main()
{
    int n;

    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    mrge(a,0,n-1);



	cout<<cnt;
}
