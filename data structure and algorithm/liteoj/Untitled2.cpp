#include <cstdio>
int oronary()
{
    int i,temp,n,s=0,fst;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        if(n%2==1)
            s++;
        n=n/2;
    }
    fst=s;
    temp++;
    while(1)
    {
        n=temp;

        while(n>0)
        {
            if((n%2)==1)
                s++;
            if(s>fst)
                break;
            n=n/2;
        }
        if(s==fst)
            break;
        temp++;
        s=0;
    }
   return temp;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
       printf("Case %d: %d\n",i,oronary());
    }
    return 0;
}

