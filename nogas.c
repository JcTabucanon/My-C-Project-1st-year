#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void delay();
void nogs(char n);//function declaration
main()
{
	char invalid[50]={"INVALID CHOICE"};//arry
	int i;//for loop in arry
	char greatings[150]={"\n\n\nTHANKS FOR CHOOSING US.... COME BACK AGAIN\n"};//string
	int choice,nm,money,prize,total,sukli,t,transaction;//if-else & switch statement
do{
	nogs('n');//function
	printf("\nENTER CHOICE : ");//choices
	scanf("%d",&choice);//scanning choice
	switch(choice)//switching choice
	{
	case 1://first choice
		{
		printf("\nENTER NUMBER OF ICE CREAM : ");
		scanf("%d",&nm);
		if(nm<1)
		{
		printf("\n\nINVALID CHOICE\n");
		}
		else
		{
		total=nm*20;
		printf("\nTOTAL = %d\n",total);
		printf("\nENTER YOUR MONEY : ");
		scanf("%d",&money);
		sukli=money-total;
		if(money<total)
		printf("\nNOT ENOUGH MONEY\n");
		else if(money>=total)
		printf("\nSUKLI = %d",sukli);
		}
		break;
		}
	case 2:
		{
		printf("\nENTER NUMBER OF ICE CREAM : ");
		scanf("%d",&nm);
		if(nm<1)
		{
		printf("\n\nINVALID CHOICE\n");
		}
		else
		{
		total=nm*22;
		printf("\nTOTAL = %d\n",total);
		printf("\nENTER YOUR MONEY : ");
		scanf("%d",&money);
		sukli=money-total;
		if(money<total)
		printf("\nNOT ENOUGH MONEY\n");
		else if(money>=total)
		printf("\nSUKLI = %d",sukli);
		}
		break;
		}
	case 3:
		{
		printf("\nENTER NUMBER OF ICE CREAM : ");
		scanf("%d",&nm);
		if(nm<1)
		{
		printf("\n\nINVALID CHOICE\n");
		}
		else
		{
		total=nm*19;
		printf("\nTOTAL = %d\n",total);
		printf("\nENTER YOUR MONEY : ");
		scanf("%d",&money);
		sukli=money-total;
		if(money<total)
		printf("\nNOT ENOUGH MONEY\n");
		else if(money>=total)
		printf("\nSUKLI = %d",sukli);
		}
		break;
		}
	case 4:
		{
		printf("\nENTER NUMBER OF ICE CREAM : ");
		scanf("%d",&nm);
		if(nm<1)
		{
		printf("\n\nINVALID CHOICE\n");
		}
		else
		{
		total=nm*17;
		printf("\nTOTAL = %d\n",total);
		printf("\nENTER YOUR MONEY : ");
		scanf("%d",&money);
		sukli=money-total;
		if(money<total)
		printf("\nNOT ENOUGH MONEY\n");
		else if(money>=total)
		printf("\nSUKLI = %d",sukli);
		}
		break;
		}
	case 5:
		{
		printf("\nENTER NUMBER OF ICE CREAM : ");
		scanf("%d",&nm);
		if(nm<1)
		{
		printf("\n\nINVALID CHOICE\n");
		}
		else
		{
		total=nm*27;
		printf("\nTOTAL = %d\n",total);
		printf("\nENTER YOUR MONEY : ");
		scanf("%d",&money);
		sukli=money-total;
		if(money<total)
		printf("\nNOT ENOUGH MONEY\n");
		else if(money>=total)
		printf("\nSUKLI = %d",sukli);
		}
		break;
		}
	default:
		{
		printf("\n");
		for(i=0;invalid[i]!='\0';i++)
		{
		delay();
		printf("\t\t%c\n",invalid[i]);
		}
		break;
		}
	}
printf("\n\nDO YOU WANT ANOTHER TRANSACTION?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
scanf("%d",&transaction);
system("cls");
t=1;
}while(transaction!=t);
printf("%s",greatings);
_getch();
}
void nogs(char n)//choices function
{
	printf("=============================================================\n");
	printf("|============= NOG'S ICE CREAM VENDING MACHINE =============|\n");
	printf("|===========================================================|\n");
	printf("|          FLAVORS             |            PRICE           |\n");
	printf("|===========================================================|\n");
	printf("|       1. UBE                 |             20             |\n");
	printf("|       2. KESO                |             22             |\n");
	printf("|       3. CHOCOLATE           |             19             |\n");
	printf("|       4. MILK                |             17             |\n");
	printf("|       5. CARAMEL             |             27             |\n");
	printf("=============================================================\n");
}
void delay()
{
	int f;
	for(f=0;f<=100000000;f++);
}
