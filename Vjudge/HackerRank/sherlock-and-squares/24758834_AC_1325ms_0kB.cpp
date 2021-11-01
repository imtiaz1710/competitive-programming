#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int main()
{
    int max=1000000000;
    vector <int> v;
    for(int i=1;i<=max;i++)
    {
        if(i*i>max)
        {
            break;
        }
        v.push_back(i*i);
    }

    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int cnt=0;

            for(int i=0;i<v.size();i++)
            {
                if(v[i]>=a && v[i]<=b)
                cnt++;
            }

        cout<<cnt<<endl;
    }
}
