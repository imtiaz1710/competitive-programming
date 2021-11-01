#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    float a,b,c,r1,r2,x;
    cin>>a>>b>>c;
    x=b*b-4*a*c;
    if((x<0.0)||(a==0))
    {
    cout<<"Impossivel calcular"<<endl;
    return 0;
    }
    r1=(-b+sqrt(x))/(2*a);
    r2=(-b-sqrt(x))/(2*a);
    printf("R1 = %0.5f\n",r1);
    printf("R2 = %0.5f\n",r2);
    return 0;
}
