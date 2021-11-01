#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
     int i=0;
   while(s[i]!='\0'){
        i++;
   }
    char a[i++];
    for(int j=0;j<i;j++)
        a[j]=s[j];
    cout<<a;
    int l=2;

    for(i=0;i<3;i++)
    {
        l=l*2;
        char b[l];
        for(int j=0;j<l;j++)
         cin>>b[j];
         for(int j=0;j<l;j++)
         cout<<b[j];

    }
}
