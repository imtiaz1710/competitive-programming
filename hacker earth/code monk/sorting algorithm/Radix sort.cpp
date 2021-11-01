#include<iostream>
#include<algorithm>
#define ten 10
using namespace std;
void countsort(int a[],int n,int pos)
{
	int freq[ten]={0};
	int output[n];
	for(int i=0;i<n;i++)
	{
		freq[(a[i]/pos)%ten]++;
	}
	for(int i=1;i<ten;i++)
	{
		freq[i]+=freq[i-1];     //cumulative frequency of f[i];
	}
	for(int i=0;i<n;i++)
	{
		output[freq[(a[i]/pos)%ten]-1]=a[i];
		freq[(a[i]/pos)%ten]--;
	}
	for(int i=0;i<n;i++)
	{
		a[i]=output[i];
	}
}

void radixsort(int a[],int n,int maxx)
{
	int mul=1;
	 while(maxx)
	 {

	    countsort(a,n,mul);
	    maxx/=10;
	    mul*=10;
	 }

}

int main()
{
	int n;
	cin>>n;			//number of array elemetn
	int a[n];
	for(int i=0;i<n;i++)
	{
        cin>>a[i];
	}
	int maxx=*max_element(a,a+n);
	radixsort(a,n,maxx);

	for(int i=0;i<n;i++)
	{
	  cout<<a[i]<<" ";

	}

}

