#include<stdio.h>
int main()
{
int i,j, a[80],n,temp;
printf("enter number of elements ");
scanf("%d",&n);
printf("enter array elements");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=1;i<=n;i++)
printf("%d ",a[i]);
return 0;
}
