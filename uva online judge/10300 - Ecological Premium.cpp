#include<cstdio>
int main()
{
    int n,f,a,b,c,sum=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&f);
        for(j=0;j<f;j++)
        {
            scanf("%d%d%d",&a,&b,&c);
            sum+=a*c;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
