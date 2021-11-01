#include <cstdio>
void oronary()
{
    int i,temp,n,s,fst;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
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

        while(n!=0)
        {
            if((n%2)==1)
                s++;
            n=n/2;
        }
        if(s==fst)
            break;
        temp++;
    }
    printf("%d\n",temp);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       oronary();
    }
    return 0;
}
