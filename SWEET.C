#include<stdio.h>
int diwali();
int laddu,ras,temp;
void main()

{
clrscr();
	printf("Enter laddu:");
	scanf("%d",&laddu);
	printf("Enter ras:");
	scanf("%d",&ras );
       temp=diwali(laddu,ras);
       printf("total sweets %d",temp);
getch();
}
int diwali(int a,int b)
{
      if(ras==0)
      {
      return 0;
      }
      else
      {
      return a+b;
      }
}



