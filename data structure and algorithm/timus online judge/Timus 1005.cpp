#include <stdio.h>
int main()
{
int n;
int temp;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(a[i]<a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
int m=a[0]-a[1];
for(int i=1;i<n;i++)
{
if((a[i]-a[i+1])<m)
m=a[i]-a[i+1];
}
printf("%d\n",m);
return 0;
}
