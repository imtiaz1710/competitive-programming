#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k;
    scanf("%d",&k);
    int a[n];
    int b[n];
    int c[k];
    int sum=0;
    int cnt=0;
    int temp;
    for(int i=0;i<k;i++)
        c[i]=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]<b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
     }
     int f=0;
     for(int i=0;i<n;i++)
     {

            for(int j=0;j<k;j++)
            {
                if(a[i]==b[j])
                {
                    f++;
                    if(f>1)
                    cnt++;

                    sum=sum+b[j];
                    b[j]=-1;
                    break;
                }
            }
        c[cnt]++;
    }

     printf("%d\n",sum);
     for(int i=0;i<k;i++)
     {
        printf("%d ",c[i]);
     }
     printf("\n");
     return 0;
}
