#include <stdio.h>
void area(float r)
{
    float a;
    a=4*r*r-3.14159*r*r;
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

