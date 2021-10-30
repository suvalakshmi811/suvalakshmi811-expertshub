#include<stdio.h>
#include<conio.h>
void main()
{
  int poori;
  int spoori;
  int rpoori;
  int kpoori;
  int bpoori;
  int seat,reat,keat,neat,sweet;
  clrscr();
  printf("enter total number of poori:\t");
  scanf("%d",&poori);
  printf("enter spoori:");
  scanf("%d",&spoori);
  printf("enter rpoori:");
  scanf("%d",&rpoori);
  seat=poori*spoori/100;
  reat=poori*rpoori/100;
  neat=poori-(spoori+rpoori);
  printf("balance neat:%d\t\n",neat);
  printf("enter kpoori:");
  scanf("%d",&kpoori);
  keat=poori*kpoori/100;
  sweet=poori-keat;
  printf("balance sweet:%d\t",sweet);
  getch();
}