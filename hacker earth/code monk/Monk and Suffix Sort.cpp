#include <iostream>
using namespace std;

void mergesort(string a[],int l,int m,int r)
{
    string temp[r-l+1];
    int i,j,k;
    i=l,j=m+1,k=0;
    while(i<=m&&j<=r)
    {
        if((a[i])<=(a[j]))
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
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
void mrge(string a[],int l,int r)
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
    string s;
    int k;

    cin>>s>>k;

    int n=s.size();
    string a[n];

    for (int i = 0; i < n; i++)
    {

       a[i]=s.substr(i,n-i);


    }

    mrge(a,0,n-1);

    cout<<a[k-1];
}
