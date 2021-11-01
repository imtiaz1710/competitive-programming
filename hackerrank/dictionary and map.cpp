#include <iostream>
using namespace std;
int main()
{
    int n;int i;int flg=0;
    cin>>n;
    string nm[n];
    long no[n];
    string sr[n];
    for( i=0;i<n;i++)
    {
        cin>>nm[i]>>no[i];

    }

    for(i=0;i<n;i++)
    {
        cin>>sr[i];
        for(int j=0;j<n;j++)
        {
            if(sr[i]==nm[j])
            {
                cout<<nm[j]<<"="<<no[j]<<endl;
                flg=1;
                break;
            }

        }
        if(flg==0)
        {
            cout<<"Not found"<<endl;
        }
        flg=0;
    }
    return 0;
}
