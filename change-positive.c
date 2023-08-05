#include<stdio.h>
#include<conio.h>
void main()
{
int num ,positive ,negative;
printf("enter number;");
scanf("%d",&num);
  if(num >= 0)
  {
  printf("positive number");
  }
  else
   {
  printf("negative number:\n");
  
     
	   
    }
 if(num<=0)	
    {
     num= num * -1;
	 printf("convert to positive:%  d",num);
	
    }
	else
	{
		printf("number=%d",num);
	}
     
	 
	 
  getch();
}