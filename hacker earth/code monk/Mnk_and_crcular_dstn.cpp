#include <bits/stdc++.h>
using namespace std;
unordered_map<long long,long long> m;
unordered_map<long long,long long> :: iterator it;
int main()
{
    long long n;
    long long x,y;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>x>>y;
        m.insert(make_pair(x,y));

    }
    long long t;
    long long q;
    long long result;

    cin>>t;
    while (t--)
    {
        long long count=0;
        cin>>q;
        for ( it = m.begin(); it !=m.end(); it++)
        {
            result=(ceil)((double)sqrt((it->first)*(it->first)+(it->second)*(it->second)));
            if(result<=q)
            count++;
        }
        cout<<count<<endl;

    }



}
