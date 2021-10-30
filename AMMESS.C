#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosa=50,tea=50,vada=200;
   int aidly,adosa,atea,avada;
   int midly,mdosa,mtea,mvada;
   int bidly,bdosa,btea,bvada;
   clrscr();
   //scanf("%d%d",&aidly,&adosa,&atea,&avada);
   printf("Enter anitha idly\n:",aidly);
   scanf("%d",&aidly);
   printf("Enter monisha idly\n:",midly);
   scanf("%d",&midly);
   printf("Enter anitha dosa\n:",adosa);
   scanf("%d",&adosa);
   printf("Enter monisha dosa\n:",mdosa);
   scanf("%d",&mdosa);
   printf("Enter anitha tea\n:",atea);
   scanf("%d",&atea);
   printf("Enter monisha tea\n:",mtea);
   scanf("%d",&mtea);
   printf("Enter anitha vada\n:",avada);
   scanf("%d",&avada);
   printf("Enter monisha vada\n:",mvada);
   scanf("%d",&mvada);
   idly=idly-aidly-midly;
   dosa=dosa-adosa-mdosa;
   tea=tea-atea-mtea;
   vada=vada-avada-mvada;
   printf("Balance\nidly\t%d\ndosa\t%d\ntea\t%d\nvada\t%d",idly,dosa,tea,vada);
   getch();
}