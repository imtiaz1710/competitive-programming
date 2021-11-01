#include <stdio.h>
int main()
{
    int n,i,sum=2;
    scanf("%d",&n);
    if(n==4)
    {
        sum=1;
        printf("%d\n",sum);
        exit(0);
    }
    if(n==7)
    {
        sum=2;
        printf("%d\n",sum);
        exit(0);
    }
    for(;n>43;n--)
    {
        i=n;
        while(i!=0)
        {
            if((i%10==4)||(i%10==7))
            {
                i=i/10;
                if((i==4)||(i==7))
                {
                    sum++;
                }
            }
            else
            {
                break;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
