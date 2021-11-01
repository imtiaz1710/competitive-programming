#include <bits/stdc++.h>
using namespace std;
void countsort(int a[],int n)
{


        int k=*max_element(a,a+n);
        int aux[k+1]={0};

        for(int i=0;i<n;i++)
        {
            aux[a[i]]++;
        }
        int j=0;
        for(int i=0;i<=k;i++)
        {
            int tmp=aux[i];

            while(tmp--)
            {
               a[j++]=i;
            }
        }

}

int main()
{
    int n;
    cout<<"Please enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Please enter the array element:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    countsort(a,n);
    for(int x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
