#include<stdio.h>
#include<conio.h>
void main()
{
int phy ,chem ,math ,eng ,hindi;
float avg , percentage , total ;
printf ("enter physics marks :");
scanf("%d",&phy);
printf ("enter chemistry marks :");
scanf("%d",&chem);
printf ("enter math marks :");
scanf("%d",&math);
printf ("enter english marks :");
scanf("%d",&eng);
printf ("enter hindi marks :");
scanf("%d",&hindi);
total = phy + chem + math + eng + hindi;
avg = (total)/5;
percentage = (total/500) * 100;
printf("averege = %f\n",avg);
printf("percentage = %f\n",percentage);
 if(percentage>=33)
 {
   printf("pass");
 }
 else
 {
 printf("fail");
 }
getch();
}