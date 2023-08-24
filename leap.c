#include<stdio.h>
#include<conio.h>
void main()
{
int year , leap ;
printf("enter the year:");
scanf("%d",&year);
leap = year%4  ;
   if(leap=0)
    {
	printf("this year is leap: %d",leap);
	}   
    else
	{
	printf("this year is  not leap year: ") ;
	}
getch();
}	