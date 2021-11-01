#include <iostream>
using namespace std;
int main()
{
    int i,j,k,temp,sum,mx,t;
    while(cin>>i>>j)
    {
    mx=0;
    printf("%d %d",i,j);
    if(i>j)
    {
        t=i;
        i=j;
        j=t;
    }

    for(k=i;k<=j;k++)
    {
        temp=k;
        sum=1;
        while(temp>1)
        {
            sum++;
            if(temp%2==0)
            {
                temp/=2;

            }
            else
            {
                temp=(temp*3)+1;
            }

        }
        if(sum>mx)
            mx=sum;

    }
    printf(" %d\n",mx);
    }
    return 0;
}
