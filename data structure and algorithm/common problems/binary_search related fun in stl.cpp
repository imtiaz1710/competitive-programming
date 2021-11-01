#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
   vector<int> v={1,2,3,4,5};
   binary_search(v.begin(),v.end(),4)?cout<<"found":cout<<"not found"<<endl;
}
