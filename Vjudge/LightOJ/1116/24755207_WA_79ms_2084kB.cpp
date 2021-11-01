#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ts=0;
    while(t--)
    {

        int n;
        cin>>n;
        if(n%2==1)
        cout<<"Impossible"<<endl;
        else
        {

            int a,b;
            for(int i=2;i<=n;i+=2)
            {

                if(n%i==0)
                {
                    if((n/i)%2==1)
                    {

                        printf("Case %d: %d %d\n",++ts,n/i,i);
                        break;
                    }


                }
            }
        }
    }
}
