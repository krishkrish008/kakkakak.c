#include<stdio.h>
int main()
{
  int n,i,a[20];
printf("\nenter  num");
scanf("%d",&n);
printf("\narray elements");
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
printf("\nelements with index ");
for(i=0;i<n;i++)
{
  if(i<n)
  {
    printf("%d %d\n",a[i],i );
    }
    }
    return 0;
}
