#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    int j=a.size()-1;
    int temp;
    int i;
    a.reverse();
    for(i=0;i<a.size()/2;i++)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
