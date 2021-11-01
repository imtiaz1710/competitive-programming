#include <stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if((A%2==0)&&C>0&&D>0&&((C+D)>(A+B))&&B>C&&D>A)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
