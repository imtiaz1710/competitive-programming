#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int cunt=0,mx=0;
	for(int i=0;i<s.size();i++ )
	{
		if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
		{
			cunt++;
		}
		else
		{

		cunt=0;
		}
		if(cunt>mx)
			{
			mx=cunt;
			}


	}
	cout<<mx<<endl;
}
