#include<cstdio>
int main()
{
    int n,l,m;
    int sum=0;
    scanf("%d",&n);
    l=n/2;
    while(l>0)
    {
      m=n-l;
      if(m%l==0) sum++;
      l--;
    }
    printf("%d\n",sum);
    return 0;
}
