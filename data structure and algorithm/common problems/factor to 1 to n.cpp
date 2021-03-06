#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void fun(int n)
{
    vector <int> v[n+1];
    v[1].push_back(1);
    int limit=sqrt(n)+1;
    for(int i=2;i<=n;i++)
    {
        v[i].push_back(1);
        v[i].push_back(i);
    }
    for(int i=2;i<=limit;i++)
    {
        for(int j=i*i;j<=n;j=j+i)
        {
            v[j].push_back(j/i);
            if(j/i!=i)
                v[j].push_back(i);
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    fun(n);
}
