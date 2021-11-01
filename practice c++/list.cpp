#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list <int> li;
    li.push_back(5);
    li.push_back(3);
    li.push_back(4);
    li.push_back(2);
    li.push_back(1);
    li.push_front(3);
    list <int>::iterator it;

                 ///print all element of list;


    cout<<"without sort: ";
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }

            ///reverse element


    li.reverse();
    cout<<endl<<"after reverse: ";
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }

           ///sorting element


    li.sort();
    cout<<endl<<"after sorting: ";
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
                     ///finding an element's return address;

    it=find(li.begin(),li.end(),3);

                   ///erase an specific element from a specific address;

    li.erase(it);
    cout<<endl<<"after erasing an element: ";
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }
                           ///insert an element

    it=find(li.begin(),li.end(),2);
    li.insert(it,0);
    cout<<endl<<"after inserting: ";
    for(it=li.begin();it!=li.end();it++)
    {
        cout<<*it<<" ";
    }


}
