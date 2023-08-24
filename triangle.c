#include<stdio.h>
int main()
{
int tri ,a ,b ,c;
printf("enter angle a=");
scanf("%d",&a);
printf("enter angle b=");
scanf("%d",&b);
printf("enter angle c=");
scanf("%d",&c);
tri=a + b + c;
if(tri==180)
   {
   printf("vaild");
   
   }
else
   {
   printf("invaild");
   }
return 0;
}