#include <iostream>
#include <stack>
using namespace std;
int main()
{
stack <string> s;
s.push("imtiaz");
s.push("moin");
s.push("sumaya");
s.push("mehedi");
while(!s.empty())
{
cout<<s.top()<<endl;
s.pop();
}
}
