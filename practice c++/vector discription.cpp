#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; ///3 size vector
    vector <int> c(3,2); ///3 size vector and every element initialize with 2
    cout<<c[0]<<endl;
    cout<<c[1]<<endl;
    cout<<c[2]<<endl;
    a.push_back(40);
    a.push_back(20);
    a.push_back(30);
    cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<a.front()<<endl; ///access first element
    cout<<a.back()<<endl; ///access last element
    cout<<a.capacity()<<endl; ///capacity

    ///Iterator:upgraded version of pointer
    vector <int>::iterator it; ///iterator
    it=a.begin(); ///point at the beginning of the a vector actually after last element
    cout<<"using iterator: "<<*it<<endl;
    a.insert(it+3,100);
    cout<<*(it+3)<<endl;
    cout<<a[3]<<endl;


                     ///Reverse Iterator
    vector <int>::reverse_iterator r;
    r=a.rbegin();

    cout<<*r<<endl;

    sort(a.begin(),a.end());

}
