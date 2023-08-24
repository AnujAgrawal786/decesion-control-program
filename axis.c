#include<stdio.h>
#include<conio.h>
int main()
{
int x , y;
printf("enter your x axis");
scanf("%d",&x);
printf("enter your y axis");
scanf("%d",&y);
if(x>0&&y>0)
 {
 printf("first quadrant");
 }
 else
 {
 if(x>0&&y<0)
   {
   printf("second quadrants");
   }
  else
   {
     if(x<0&&y<0)
      {
       printf("third quadrants");
	  }
	 else
	  {
	    printf("fourth quadrants");		
	  }
   }  
 }


}