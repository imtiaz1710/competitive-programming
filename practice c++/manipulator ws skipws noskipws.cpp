#include <iostream>

using namespace std;

class Animals
{
	public:
		void sound()
		{
			cout << "This is parent class" << endl;
		}
};

class Dogs : public Animals
{
	public:
		void sound()
		{
			cout << "Dogs bark" << endl;
		}
};

int main()
{
	Animals a;
	Dogs d;
	d.Animals::sound(); //  early binding
	return 0;
}
