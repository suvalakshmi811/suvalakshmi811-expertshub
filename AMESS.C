#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vada=200;
   int aidly,adosa,atea,avada;
   int bidly,bdosa,btea,bvada;
   clrscr();
   //scanf("%d",&aidly,&adosa,&atea,&avada);
   printf("Enter anitha idly\n:",aidly);
   scanf("%d",&aidly);
   printf("Enter anitha dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("Enter anitha tea\n:",atea);
   scanf("%d",&atea);
   printf("Enter anitha vada\n:",avada);
   scanf("%d",&avada);
   idly=idly-aidly;
   dosa=dosa-adosa;
   tea=tea-atea;
   vada=vada-avada;
   printf("Balance\nidly\t%d\ndosa\t%d\ntea\t%d\nvada\t%d",idly,dosa,tea,vada);
   getch();
}







