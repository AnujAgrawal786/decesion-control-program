//ascii range print
#include<stdio.h>
int main()
{
char c;
int ascii;
printf("enter charactor:");
scanf("%c",&c);
ascii=c;
if(ascii>=65&&ascii<=90)
  {
  printf("capital letter");
  }
else if(ascii>=97&&ascii<=122)
       {
	   printf("small letter");
	   }
	   else if (ascii>=48&&ascii<=57)
                {
				printf("digit");
				}
			else 
			{
			printf("special symbol");
			}
}