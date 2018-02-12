#include<stdio.h>
int main()
{
	char a;
	printf("\nEnter Something");
	scanf("%c",&a);
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z'))
	{


		printf("\nNOT A NUMERIC");
	}
else
printf("\nNumeric");
return 0;}
