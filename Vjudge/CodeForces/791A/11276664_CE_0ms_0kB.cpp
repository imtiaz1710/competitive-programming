#include<stdio.h>
void main()
{
    int a,b,i,sum=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
        a=a*3;
        b=b*2;
        sum++;
    }
    printf("%d",sum);


}
