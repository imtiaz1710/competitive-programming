#include <iostream>
#include <typeinfo>
using namespace std;
class a
{};
class b:public a
{};
class c{};
int main()
{
	a x;
	b y,y1;
	c z;
	if(typeid(x)==typeid(y))
		cout<<"x and y are same"<<endl;
	else
		cout<<"x and y are not same"<<endl;
	if(typeid(y)==typeid(y1))
		cout<<"y and y1 are same"<<endl;
	else
		cout<<"Y and y1 are same"<<endl;
	cout<<typeid(c).name();

}
