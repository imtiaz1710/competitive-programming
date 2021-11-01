#include <bits/stdc++.h>
using namespace std;
#define max 100
int main(int argc, char const *argv[])
{
	
	vector <int> v[max];
	stack<int> s;
	int node;
	int edge;
	cin>>node>>edge;
	int x,y;
	bool f=false;
	bool flag[max]={false};
	for (int i = 1; i <= edge; ++i)
	{
		cin>>x>>y;
		if(!f)
		{
			s.push(x);
			flag[x]=true;
			f=true;
		}
		v[x].push_back(y);
		v[y].push_back(x);
	
	}
	
	cout<<s.top()<<endl;
	
	while (!s.empty())
	{	
		int p=s.top();
		bool f1=false;
		for(int i=0;i<v[p].size();i++)
		{
			if(flag[v[p][i]]==false)
			{
				cout<<v[p][i]<<endl;
				s.push(v[p][i]);
				flag[v[p][i]]=true;
				f1=true;
				break;
			}
		}
		if(!f1) s.pop();
	}

	return 0;
}