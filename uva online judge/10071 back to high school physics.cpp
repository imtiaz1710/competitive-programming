#include <iostream>
using namespace std;
int main()
{
		double v,t;

		while(cin>>v>>t)
		{
			if(t==0)
			{
				cout<<0<<endl;
				continue;
			}
			double s;
			double a=v/t;
			double T=t*2;
			s=.5*a*T*T;
			cout<<s<<endl;
		}



}
