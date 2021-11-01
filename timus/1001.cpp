#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
    vector<double> v;
    double n;
    while(cin>>n)
    {
        v.push_back(n);
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<sqrt(v[i])<<endl;
        v.pop_back();
    }
    return 0;

}
