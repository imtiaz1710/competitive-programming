//the code is only for 0 and positive power
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,pow;
    scanf("%d%d",&n,&pow);
    int result=1;
    while(pow!=0)
    {
        if(pow%2==0)
        {
            n=n*n;
            pow=pow/2;
        }
        else
        {
            result=result*n;
            pow--;
        }
    }
     printf("result=%d",result);
     return 0;
}
