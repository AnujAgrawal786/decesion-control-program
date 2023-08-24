//if rectangle area is greater than perimeter than print vaild another invaild


#include<stdio.h>
#include<conio.h>
int main()
{
int l ,b ,area ,perimeter;
printf("enter rectangle length:");
scanf("%d",&l);
printf("enter rectangle width:");
scanf("%d",&b);
area= l*b;
perimeter=(2*l+2*b);
if(area>perimeter)
  {
  printf("vaild");
  }
else
  {
  printf("invaild");
  }
}