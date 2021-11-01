#include <iostream>
#include <set>
#include <iterator>
using namespace std;
int main()
{
set <int> p;
p.insert(5);
p.insert(1);
p.insert(4);
p.insert(3);
p.insert(2);

set <int>::iterator it;
it=p.begin();
for(int i=0;i<5;i++){
cout<<*it<<endl;
it++;
}
}
