//A - Utopian Tree

#include <iostream>
using namespace std;


int main()
{

	 int t;
	 cin>>t;
	 while (t--)
	 {
		 int n;
		 cin>>n;
		 int h=1;
		 if(n==0) 
		 {
			 cout<<h<<endl;
			 continue;
		 }
		 for (int i = 1; i <= n; i++)
		 {
			 if(i%2==1)
			 h=h*2;
			 else
			 {
				 h++;
			 }
			 
		 }
		 cout<<h<<endl;
		 
		 
		
	 }
	 

}
