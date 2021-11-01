#include<iostream>
#include<algorithm>
#define ten 100000
using namespace std;
void countsort(long a[],long n,int pos)
{
	long freq[ten]={0};
	long output[n];
	for(int i=0;i<n;i++)
	{
		freq[(a[i]/pos)%ten]++;
	}
	for(int i=1;i<ten;i++)
	{
		freq[i]+=freq[i-1];     //cumulative frequency of f[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		output[freq[(a[i]/pos)%ten]-1]=a[i];
		freq[(a[i]/pos)%ten]--;
	}
	for(int i=0;i<n;i++)
	{
		a[i]=output[i];
	}
	for(int i=0;i<n;i++)
	{
	  cout<<a[i]<<" ";

	}
	cout<<endl;

}

void radixsort(long a[],long n,long maxx)
{
	long mul=1;
	 while(maxx)
	 {

	    countsort(a,n,mul);
	    maxx/=100000;
	    mul*=100000;
	 }

}

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	long n;
	cin>>n;			//number of array elemetn
	long a[n];
	for(long i=0;i<n;i++)
	{
        cin>>a[i];
	}
	int maxx=*max_element(a,a+n);
	radixsort(a,n,maxx);



}

