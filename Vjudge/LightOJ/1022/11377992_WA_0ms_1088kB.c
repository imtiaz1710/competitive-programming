#include <stdio.h>
#include <math.h>
void area(float r)
{
    float a;
    a=4*r*r-(2*acos(0.0))*r*r;
    printf("%.2f\n",a);
}
int main()
{
    int t,i;
    float r;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%f",&r);
        area(r);
    }
    return 0;
}

