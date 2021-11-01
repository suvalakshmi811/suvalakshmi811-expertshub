#include<stdio.h>
#include<conio.h>
int raghul=0;
void main()
{      do
       {
	clrscr();
		while(raghul)
		{
		clrscr();
			printf("enter raghul status: ");
			scanf("%d",&raghul);
			if(raghul==0)
			{
			       printf("raghul is sitting:");
			       //raghul=1;
			       //getch();
			       //continue;
			 }
			  else if(raghul==1)
			  {
			       printf("raghul is standing:");
			       //break;
			  }
			  else
			  {
			       printf("invalid input");
			  }
		}
		   getch();
		   while(raghul)
}





























