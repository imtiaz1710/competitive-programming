#include <iostream>
#include <vector>
///vector and the concept of array is almost same
using namespace std;
int main()
{
    vector<int> ob; ///declare a vector 'ob'
    int n,i;
    for(i=0;i<5;i++)
    {
        cin>>n;
        ob.push_back(n); ///enter one by one element in vector
    }


    cout<<"vector1:"<<endl;
    for(i=0;i<ob.size();i++) ///ob.size() is return the size of the vector ob
    {
        cout<<ob.at(i)<<endl; ///ob[i] also accepted by compiler
    }



    ob.insert(ob.begin(),100); ///ob.insert(index,value)=>insert a value in particular index
    cout<<endl<<"vector2:"<<endl;
    for(i=0;i<ob.size();i++) ///ob.size() is return the size of the vector ob
    {
        cout<<ob[i]<<endl; ///ob.at(i) also accepted by compiler
    }



    ob.insert(ob.begin()+3,100); ///insert 100 in index no 3
    cout<<endl<<"vector3:"<<endl;
    for(i=0;i<ob.size();i++) ///ob.size() is return the size of the vector ob
    {
        cout<<ob[i]<<endl; ///ob.at(i) also accepted by compiler
    }


    ob.erase(ob.begin()); ///erase 1st element from vector  ***ob.erase(index)=>erase a particular element from vector
    ob.erase(ob.begin()+2); ///erase 3rd indexed element from vector
    cout<<endl<<"vector4:"<<endl;
    for(i=0;i<ob.size();i++) ///ob.size() is return the size of the vector ob
    {
        cout<<ob[i]<<endl; ///ob.at(i) also accepted by compiler
    }



    if(ob.empty())  ///ob.empty()=>return boolian value whether vector is empty or not
        cout<<"vector is empty now!"<<endl;
    else
        cout<<"vector is not empty."<<endl;



    ob.clear();   ///clear all the element of the vector
    if(ob.empty())  ///ob.empty()=>return boolian value whether vector is empty or not
        cout<<"vector is empty now!"<<endl;
    else
        cout<<"vector is not empty."<<endl;
}
