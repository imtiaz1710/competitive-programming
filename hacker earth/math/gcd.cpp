#include <stdio.h>
int main()
{
    int a,b;
    int gcd(int a,int b);
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));

}
int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
    {
        gcd(b,a%b);
    }
}
