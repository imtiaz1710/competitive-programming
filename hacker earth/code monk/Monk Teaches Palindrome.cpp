#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
        string s,tmp;
        cin>>s;
        tmp=s;
        reverse(s.begin(),s.end());
        if(tmp==s)
        {
            cout<<"YES ";
            if(tmp.size()%2==0)
            cout<<"EVEN"<<endl;
            else
            cout<<"ODD"<<endl;
        }
        else
        cout<<"NO"<<endl;
   }
}

