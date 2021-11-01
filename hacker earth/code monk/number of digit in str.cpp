#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int a[10]={0};
    cin>>s;
    int n=s.length();

    for(int i=0;i<n;i++)
    {
        int k=0;
        for(char j='0';j<='9';j++)
        {
            if(s[i]==j)
            a[k]++;
            k++;
        }

    }
    for(int i=0;i<=9;i++)
    {
        cout<<i<<" "<<a[i]<<endl;
    }
    return 0;
}
