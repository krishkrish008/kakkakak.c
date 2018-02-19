#include <stdio.h>
void main()
{
      char str [100];
      int letter,digit,bspace,other;
      int i;
      clrscr();
      printf("Enter TEXT\n");
      gets(str);
      letter =0;
      i = 0;
      while (str[i] != 0)
	  {
	      char ch= str[i];
	      if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
	      letter=letter+1;
	      else if (ch>= '0' && ch<= '9')
		       digit=digit+1;
	      else if (ch == ' ' || ch =='\n' || ch == '\t')
		       bspace=bspace+1;
	      else other++;
		       i=i+1;
}
	      printf("Letters:%d", letter);
	      getch();
}
