#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n,tmp,x;
		cin>>n>>k;
		k=k%n;
		vector<int> a;
		for(int i=0;i<n;i++)
		{
		cin>>x;
		a.push_back(x);
		}
		for(int i=n-k;i<n;i++)
		{
			cout<<a[i]<<" ";
		}

		for(int i=0;i<n-k;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

