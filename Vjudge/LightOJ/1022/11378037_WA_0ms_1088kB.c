#include <stdio.h>
#include <math.h>
void area(float r)
{
    float a;
    a=(4*r*r)-((2*acos(0.0))*r*r);
    printf("%.2f\n",a);
}
int main()
{
    int T,i;
    float r;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%f",&r);
        if((r<=0)||(r>1000))
        {
            continue;
        }
        area(r);
    }
    return 0;
}

