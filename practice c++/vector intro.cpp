#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(3);///add an element at the end of the vector
    vec.push_back(4);
    cout<<vec.at(0)<<endl; ///print an element of index 0
    cout<<vec.at(1)<<endl;
    cout<<"size of vector: "<<vec.size()<<endl; ///print size of a vector
    vec.pop_back();                             ///remove an element from back
    cout<<"After removing an element size of vector: "<<vec.size()<<endl;

}
