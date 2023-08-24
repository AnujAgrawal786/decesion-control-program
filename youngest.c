#include<stdio.h>
int main()
{
int ram ,shyam ,ajay;
printf("enter ram age:");
scanf("%d",&ram);
printf("enter shyam age:");
scanf("%d",&shyam);
printf("enter ajay age:");
scanf("%d",&ajay);
if(ram<shyam&&ram<ajay)
 {
 printf("ram is youngest\n");
 }
else if(shyam<ram&&shyam<ajay)
     {
	 printf("shyam is youngest:");
	 }
     else if (ajay<shyam&&ajay<ram)
	       {
		   printf("ajay is youngest");
		   
		   }
return 0;
}