#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float area(float r)
{
    float a;
    a=(4*r*r)-((2*acos(0.0))*r*r);
    return a;
}
int main()
{
    int T,i;
    float r;

    scanf("%d",&T);
    if(T>1000)
    {
        exit(0);
    }
    for(i=1;i<=T;i++)
    {
        scanf("%f",&r);
        if((r<=0)||(r>1000))
        {
            continue;
        }
         printf("Case %d: %.2f\n",i,area(r));
    }
    return 0;
}

