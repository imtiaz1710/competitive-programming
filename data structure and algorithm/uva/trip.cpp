#include <stdio.h>
#include <math.h>
int main()
{
    int doller,cent,n;
    while(scanf("%d",&n)==1 && n!=0)
    {
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
          scanf("%d.%d",&doller,&cent);
           a[i]=doller*100+cent;
           sum=sum+a[i];
        }
        int avgl=sum/n;
        int avgh=ceil(1.0*sum/n);
        int totalh=0,totall=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<avgl)
                totall+=avgl-a[i];
            else if(a[i]>avgh)
                totalh+=a[i]-avgh;
        }
        int total;
        if(totalh>totall)
            total=totalh;
        else
            total=totall;
        printf("$%d.",total/100);
        if(total%100<10)
            printf("0");
        printf("%d\n",total%100);
    }
    return 0;

}
