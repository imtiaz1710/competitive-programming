#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
   vector<int> v={1,3,4,5,9};
   vector<int> ::iterator it,it1;
   binary_search(v.begin(),v.end(),7)?cout<<"found":cout<<"not found"<<endl;
   it=lower_bound(v.begin(),v.end(),2);
   cout<<*it<<endl;
   it1=upper_bound(v.begin(),v.end(),3);
   cout<<*it1<<endl;

}

