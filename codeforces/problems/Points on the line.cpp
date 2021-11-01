#include<cstdio>
int main()
{
    int n,d,i,j,temp;
    scanf("%d%d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if((a[i]-a[0])>d)
            break;
    }
    printf("%d\n",n-i);
    return 0;

}
