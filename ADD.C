#include<stdio.h>
#include<conio.h>
void main()
{
   int no1, no2, out1,o2,o3,o4,o5;
   clrscr();
   printf("Enter input values :");
   scanf("%d%d",&no1,&no2);
   //printf("Enter input 2");
   //scanf("%d",&no2);
   out1=no1+no2;
   printf("sum of values are %d",out1);
   o2=no1-no2;
   printf("sub of values are %d", o2);
   o3=no1*no2;
   printf("multiply of values are %d",o3);
   o4=no1/no2;
   printf("Division of values are %d",o4);
   o5=no1%no2;
   printf("modulos of values are %d",o5);
   getch();
}
