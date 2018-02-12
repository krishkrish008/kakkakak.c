#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100000],i,n,mini;
    printf("enter size");

    scanf("%d",&n);
    printf("enter element");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++){

        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    printf("%d",mini);
    return 0;
}
