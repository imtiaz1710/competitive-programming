#include <iostream>
#include<map>
#include<algorithm>
#include <iterator>
#include <cstring>

using namespace std;
int main()
{
    int n;
    long x;
    cin>>n;
    cin.ignore();
    string s;
    string st;
    map <string,long> m;
    for(int i=0;i<n;i++)
    {
        cin>>s>>x;
        m[s]=x;
    }
    map <string,long>::iterator it;
    while(cin>>st)
    {

        if((it=m.find(st))!=m.end())
        {
            cout<<it->first<<"="<<it->second<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
}
