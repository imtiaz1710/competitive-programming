#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void seive(int m,int n)
{
    int mark[n]={0};
    vector <int> prime;
    int limit;
    limit=sqrt(n)+2;
    prime.push_back(2);
    for(int i=3;i<n;i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(int j=i*i;j<n;j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }
    for(int i=0;i<prime.size();i++)
    {
        if(prime[i]>=m)
        cout<<prime[i]<<endl;
    }

}

int main()
{
     int n,m;
     cin>>m>>n;
     seive(m,n);
}
