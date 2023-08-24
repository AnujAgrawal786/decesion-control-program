#include<stdio.h>
#include<conio.h>
void main()
{
int n ;
printf("enter the number");
scanf("%d",&n);
   if(n%5==0)
    {
		if(n%7==0)
		{
	      printf("vaild");
	    }
		else
		{
			printf("invaild");
		}
	}
	else
	{
	printf("invaild");
	}
}	