#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void box();
void vipdri();
void c1dri();
main()
{
	char arr[]={"GOOD BYE........"};
	char str[]={"\n\npress any key to continue....."};
	int vip=5000;
	int c1=3000;
	int vipdr=5000;
	int c1dr=3000;
	int money,sukli=0,transaction;
	int choice,drink,pretotal=0,room,i;
do{
	printf("ENTER YOUR AGE :(press 1 if yes)(pres 2 if no)");
	scanf("%d",&choice);
	printf("%s",str);
	getch();
	system("cls");
	switch(choice)//--------------------------------------------------------case for age
{//-------------------------------------------------------------------------case for age
case 1://-------------------------------------------------------------------case 1 for age
	{
		box();//-----------------------------------------------------------------room
		printf("enter room type:(press 1 if yes)(pres 2 if no)");
		scanf("%d",&room);
		switch(room)//--------------------------------------------------------------------case room
		{
		case 1://--------------------------------------------------------------------------case room 1
			vipdri();
			printf("DO YOU WANT SOME DRINKS?(press 1 if yes)(press 2 if no)");
			scanf("%d",&drink);
			switch(drink)//----------------------------------------------------------------case drink
			{
			case 1://-----------------------------------------------------------------------case 1 for drink
				pretotal=vip+vipdr;
				printf("PRETOTAL:%d",pretotal);
				printf("\nENTER MONEY:");
				scanf("%d",&money);
				{
				if (money<pretotal)
				{
					printf("\nINSUFICIENT MONEY");
				}
				else
				{
					sukli=money-pretotal;
					printf("\nCHANGE:%d",sukli);
				}
				}
				break;
			case 2://------------------------------------------------------------------------case 2 for drink
				pretotal=vip;
				printf("PRETOTAL:%d",pretotal);
				printf("\nENTER MONEY:");
				scanf("%d",&money);
				{
				if (money<pretotal)
				{
					printf("\nINSUFICIENT MONEY");
				}
				if (money>=pretotal)
				{
					sukli=money-pretotal;
					printf("\nCHANGE:%d",sukli);
				}
				}
				break;
			default://------------------------------------------------------------------------default for dink
				printf("INVALID CHOICE");
				break;
			}
			break;//-----------------------------------------------------------------------case room 1 break
		case 2://--------------------------------------------------------------------------case room 2
			c1dri();
			printf("DO YOU WANT SOME DRINKS?(press 1 if yes)(press 2 if no)");
			scanf("%d",&drink);
			switch(drink)//----------------------------------------------------------------case drink
			{
			case 1://-----------------------------------------------------------------------case 1 for drink
				pretotal=c1+c1dr;
				printf("PRETOTAL:%d",pretotal);
				printf("\nENTER MONEY:");
				scanf("%d",&money);
				{
				if (money<pretotal)
				{
					printf("\nINSUFICIENT MONEY");
				}
				else
				{
					sukli=money-pretotal;
					printf("\nCHANGE:%d",sukli);
				}
				}
				break;
			case 2://------------------------------------------------------------------------case 2 for drink
				pretotal=c1;
				printf("PRETOTAL:%d",pretotal);
				printf("\nENTER MONEY:");
				scanf("%d",&money);
				{
				if (money<pretotal)
				{
					printf("\nINSUFICIENT MONEY");
				}
				if (money>=pretotal)
				{
					sukli=money-pretotal;
					printf("\nCHANGE:%d",sukli);
				}
				}
				break;
			default://------------------------------------------------------------------------default for dink
				printf("INVALID CHOICE");
				break;
			}
			break;//-----------------------------------------------------------------------case room 2 break
		default://-------------------------------------------------------------------------default room
			printf("INVALID CHOICE");
			break;//-----------------------------------------------------------------------default room 
		}
	}
	break;//--------------------------------------------------------------------------------break for case 1 for age
case 2://-----------------------------------------------------------------------------------case 2 for age
	{
	printf("YOURE NOT ALLOWED..SORRY");
	}
	break;
default://----------------------------------------------------------------------------------default for age
	{
	printf("INVALID CHOICE");
	}
	break;
}//--------------------------------------------------------------------------case for age
printf("\n\nDO YOU WANT ANOTHER TRANSACTION?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
scanf("%d",&transaction);
system("cls");
}while(transaction!=1);
for(i=0;arr[i]!='\0';i++)
{
	printf("%c\n",arr[i]);
}
getch();
}
void box()
{
	printf("=============================================================\n");
	printf("|=============== WELCOME TO MODERN KTV BAR =================|\n");
	printf("|===========================================================|\n");
	printf("|          TABLES              |            PRICE           |\n");
	printf("|===========================================================|\n");
	printf("|       1. VIP                 |            5000            |\n");
	printf("|       2. 1ST CLASS           |            3000            |\n");
	printf("=============================================================\n");
}
void vipdri()
{
	printf("=============================================================\n");
	printf("|========= WELCOME TO modern KTV BAR VIP ROOM ==============|\n");
	printf("|===========================================================|\n");
	printf("|          DRINKS              |            PRICE           |\n");
	printf("|===========================================================|\n");
	printf("|       1. YES                 |           5000             |\n");
	printf("|       2. NO                  |                            |\n");
	printf("=============================================================\n");
}
void c1dri()
{
	printf("=============================================================\n");
	printf("|====== WELCOME TO MODERN KTV BAR FIRST CLASS ROOM =========|\n");
	printf("|===========================================================|\n");
	printf("|          DRINKS              |            PRICE           |\n");
	printf("|===========================================================|\n");
	printf("|       1. YES                 |            3000            |\n");
	printf("|       2. NO                  |                            |\n");
	printf("=============================================================\n");
}