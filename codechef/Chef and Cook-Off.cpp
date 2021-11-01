#include<cstdio>
int main()
{
    int t;
    int a,b,c,d,e;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        int num=a+b+c+d+e;
        if(num==0) printf("Beginner\n");
        if(num==1) printf("Junior Developer\n");
        if(num==2) printf("Middle Developer\n");
        if(num==3) printf("Senior Developer\n");
        if(num==4) printf("Hacker\n");
        if(num==5) printf("Jeff Dean\n");

    }
    return 0;
}
