#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int  main()
{
	///first rule
	pair <int,string> p;
	p.first=1710;
	p.second="imtiaz";
	cout<<p.first<<" "<<p.second<<endl;
	
	///second rule
	
	p=make_pair(23,"imtiaz");
	cout<<p.first<<" "<<p.second<<endl;
	 
	///pair with vector
	vector <pair<string,int> > v;
	v.push_back(make_pair("Bangladesh",210));
	v.push_back(make_pair("india",100));
	v.push_back(make_pair("sri lanka",200));
	for(int i=0;i<3;i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}
	return 0;

}