#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void greetings();
void delay(int n);
void table();
void gret();
void table7();
void table8();
void table9();
void table10();
void table11();
void table12();
struct list
	{
		char fname[50],faddress[50],sname[50],tname[50],saddress[50],taddress[50];
		char age[10],cnmbr[20];
	};
int i=0,fee=0,plan=0,discount=0,total=0,interest=0;
int choice=0,t=0,transaction=0;
void main()
{
	struct list l;
do{
	greetings();
	table();
	printf("\nENTER CHOICE : ");
	scanf("%d",&choice);
	system("cls");
	switch(choice)
	{
	case 1://grade 7	
		{
		printf("\nPLEASE ENTER YOU'RE FIRST NAME : ");
		scanf("%s",l.fname);
		printf("\nPLEASE ENTER YOU'RE MIDDLE NAME : ");
		scanf("%s",l.sname);
		printf("\nPLEASE ENTER YOU'RE FAMILY NAME : ");
		scanf("%s",l.tname);
		printf("\nPLEASE ENTER YOU'RE AGE : ");
		scanf("%s",&l.age);
		printf("\nPLEASE ENTER YOU'RE BARANGAY : ");
		scanf("%s",&l.faddress);
		printf("\nPLEASE ENTER YOU'RE MONICIPALITY : ");
		scanf("%s",&l.saddress);
		printf("\nPLEASE ENTER YOU'RE PROVINCE : ");
		scanf("%s",l.taddress);
		printf("\nPLEASE ENTER YOU'RE CONTACT # : ");
		scanf("%s",l.cnmbr);
		getch();
		system("cls");
		}
		{
do
{
			table7();
			printf("PLEASE CHOOCE TUITION FEE PLAN : ");
			scanf("%d",&plan);
			switch(plan)
			{
			case 1:
				total=10*300;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 2:
				total=10*300;
				discount=total*.05;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 3:
				total=0*0;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				printf("\nNORMAL BILL BASE ON PER MONTH");
				break;
			case 4:
				total=10*300;
				interest=total*.10;
				fee=total+interest;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  INTEREST   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 5:
				printf("\nTHANKS FOR VISITING US");
				break;
			default:
				printf("\nINVALID CHOICE");
				break;
			}
	printf("\n\nDO YOU WANT TO CHANGE YOUR PLAN?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
	scanf("%d",&transaction);
	system("cls");
	t=1;
}while(transaction!=t);

		}
		printf("\n=================================================================================");
		printf("\n================== PLEASE PRESENT THIS FORM IN REGISTRAR ========================");
		printf("\n=================================================================================");
		printf("\n|NAME    : %15s %15s %15s\t\t\t|",l.fname,l.sname,l.tname);
		printf("\n|ADDRESS : %15s %15s %15s\t\t\t|",l.faddress,l.saddress,l.taddress);
		printf("\n|AGE     : %15s\t\t\t\t\t\t\t|",l.age);
		printf("\n|NUMBER  : %15s\t\t\t\t\t\t\t|",l.cnmbr);
		printf("\n=================================================================================");
		getch();
		break;
	case 2://grade 8
		{
		printf("\nPLEASE ENTER YOU'RE FIRST NAME : ");
		scanf("%s",l.fname);
		printf("\nPLEASE ENTER YOU'RE MIDDLE NAME : ");
		scanf("%s",l.sname);
		printf("\nPLEASE ENTER YOU'RE FAMILY NAME : ");
		scanf("%s",l.tname);
		printf("\nPLEASE ENTER YOU'RE AGE : ");
		scanf("%s",&l.age);
		printf("\nPLEASE ENTER YOU'RE BARANGAY : ");
		scanf("%s",&l.faddress);
		printf("\nPLEASE ENTER YOU'RE MONICIPALITY : ");
		scanf("%s",&l.saddress);
		printf("\nPLEASE ENTER YOU'RE PROVINCE : ");
		scanf("%s",l.taddress);
		printf("\nPLEASE ENTER YOU'RE CONTACT # : ");
		scanf("%s",l.cnmbr);
		getch();
		system("cls");
		}
		{
do
{
			table8();
			printf("PLEASE CHOOCE TUITION FEE PLAN : ");
			scanf("%d",&plan);
			switch(plan)
			{
			case 1:
				total=10*350;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 2:
				total=10*300;
				discount=total*.05;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 3:
				total=0*0;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				printf("\nNORMAL BILL BASE ON PER MONTH");
				break;
			case 4:
				total=10*350;
				interest=total*.10;
				fee=total+interest;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  INTEREST   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 5:
				printf("\nTHANKS FOR VISITING US");
				break;
			default:
				printf("\nINVALID CHOICE");
				break;
			}
	printf("\n\nDO YOU WANT TO CHANGE YOUR PLAN?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
	scanf("%d",&transaction);
	system("cls");
	t=1;
}while(transaction!=t);

		}
		printf("\n=================================================================================");
		printf("\n================== PLEASE PRESENT THIS FORM IN REGISTRAR ========================");
		printf("\n=================================================================================");
		printf("\n|NAME    : %15s %15s %15s\t\t\t|",l.fname,l.sname,l.tname);
		printf("\n|ADDRESS : %15s %15s %15s\t\t\t|",l.faddress,l.saddress,l.taddress);
		printf("\n|AGE     : %15s\t\t\t\t\t\t\t|",l.age);
		printf("\n|NUMBER  : %15s\t\t\t\t\t\t\t|",l.cnmbr);
		printf("\n=================================================================================");
		getch();
		break;
	case 3://grade 9
		{
		printf("\nPLEASE ENTER YOU'RE FIRST NAME : ");
		scanf("%s",l.fname);
		printf("\nPLEASE ENTER YOU'RE MIDDLE NAME : ");
		scanf("%s",l.sname);
		printf("\nPLEASE ENTER YOU'RE FAMILY NAME : ");
		scanf("%s",l.tname);
		printf("\nPLEASE ENTER YOU'RE AGE : ");
		scanf("%s",&l.age);
		printf("\nPLEASE ENTER YOU'RE BARANGAY : ");
		scanf("%s",&l.faddress);
		printf("\nPLEASE ENTER YOU'RE MONICIPALITY : ");
		scanf("%s",&l.saddress);
		printf("\nPLEASE ENTER YOU'RE PROVINCE : ");
		scanf("%s",l.taddress);
		printf("\nPLEASE ENTER YOU'RE CONTACT # : ");
		scanf("%s",l.cnmbr);
		getch();
		system("cls");
		}
		{
do
{
			table9();
			printf("PLEASE CHOOCE TUITION FEE PLAN : ");
			scanf("%d",&plan);
			switch(plan)
			{
			case 1:
				total=10*450;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 2:
				total=10*450;
				discount=total*.05;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 3:
				total=0*0;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				printf("\nNORMAL BILL BASE ON PER MONTH");
				break;
			case 4:
				total=10*450;
				interest=total*.10;
				fee=total+interest;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  INTEREST   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 5:
				printf("\nTHANKS FOR VISITING US");
				break;
			default:
				printf("\nINVALID CHOICE");
				break;
			}
	printf("\n\nDO YOU WANT TO CHANGE YOUR PLAN?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
	scanf("%d",&transaction);
	system("cls");
	t=1;
}while(transaction!=t);

		}
		printf("\n=================================================================================");
		printf("\n================== PLEASE PRESENT THIS FORM IN REGISTRAR ========================");
		printf("\n=================================================================================");
		printf("\n|NAME    : %15s %15s %15s\t\t\t|",l.fname,l.sname,l.tname);
		printf("\n|ADDRESS : %15s %15s %15s\t\t\t|",l.faddress,l.saddress,l.taddress);
		printf("\n|AGE     : %15s\t\t\t\t\t\t\t|",l.age);
		printf("\n|NUMBER  : %15s\t\t\t\t\t\t\t|",l.cnmbr);
		printf("\n=================================================================================");
		getch();
		break;
	case 4://grade 10
		{
		printf("\nPLEASE ENTER YOU'RE FIRST NAME : ");
		scanf("%s",l.fname);
		printf("\nPLEASE ENTER YOU'RE MIDDLE NAME : ");
		scanf("%s",l.sname);
		printf("\nPLEASE ENTER YOU'RE FAMILY NAME : ");
		scanf("%s",l.tname);
		printf("\nPLEASE ENTER YOU'RE AGE : ");
		scanf("%s",&l.age);
		printf("\nPLEASE ENTER YOU'RE BARANGAY : ");
		scanf("%s",&l.faddress);
		printf("\nPLEASE ENTER YOU'RE MONICIPALITY : ");
		scanf("%s",&l.saddress);
		printf("\nPLEASE ENTER YOU'RE PROVINCE : ");
		scanf("%s",l.taddress);
		printf("\nPLEASE ENTER YOU'RE CONTACT # : ");
		scanf("%s",l.cnmbr);
		getch();
		system("cls");
		}
		{
do
{
			table10();
			printf("PLEASE CHOOCE TUITION FEE PLAN : ");
			scanf("%d",&plan);
			switch(plan)
			{
			case 1:
				total=10*500;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 2:
				total=10*500;
				discount=total*.05;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 3:
				total=0*0;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				printf("\nNORMAL BILL BASE ON PER MONTH");
				break;
			case 4:
				total=10*500;
				interest=total*.10;
				fee=total+interest;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  INTEREST   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 5:
				printf("\nTHANKS FOR VISITING US");
				break;
			default:
				printf("\nINVALID CHOICE");
				break;
			}
	printf("\n\nDO YOU WANT TO CHANGE YOUR PLAN?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
	scanf("%d",&transaction);
	system("cls");
	t=1;
}while(transaction!=t);

		}
		printf("\n=================================================================================");
		printf("\n================== PLEASE PRESENT THIS FORM IN REGISTRAR ========================");
		printf("\n=================================================================================");
		printf("\n|NAME    : %15s %15s %15s\t\t\t|",l.fname,l.sname,l.tname);
		printf("\n|ADDRESS : %15s %15s %15s\t\t\t|",l.faddress,l.saddress,l.taddress);
		printf("\n|AGE     : %15s\t\t\t\t\t\t\t|",l.age);
		printf("\n|NUMBER  : %15s\t\t\t\t\t\t\t|",l.cnmbr);
		printf("\n=================================================================================");
		getch();
		break;
	case 5://grade 11
		{
		printf("\nPLEASE ENTER YOU'RE FIRST NAME : ");
		scanf("%s",l.fname);
		printf("\nPLEASE ENTER YOU'RE MIDDLE NAME : ");
		scanf("%s",l.sname);
		printf("\nPLEASE ENTER YOU'RE FAMILY NAME : ");
		scanf("%s",l.tname);
		printf("\nPLEASE ENTER YOU'RE AGE : ");
		scanf("%s",&l.age);
		printf("\nPLEASE ENTER YOU'RE BARANGAY : ");
		scanf("%s",&l.faddress);
		printf("\nPLEASE ENTER YOU'RE MONICIPALITY : ");
		scanf("%s",&l.saddress);
		printf("\nPLEASE ENTER YOU'RE PROVINCE : ");
		scanf("%s",l.taddress);
		printf("\nPLEASE ENTER YOU'RE CONTACT # : ");
		scanf("%s",l.cnmbr);
		getch();
		system("cls");
		}
		{
do
{
			table11();
			printf("PLEASE CHOOCE TUITION FEE PLAN : ");
			scanf("%d",&plan);
			switch(plan)
			{
			case 1:
				total=10*700;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 2:
				total=10*700;
				discount=total*.05;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 3:
				total=0*0;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				printf("\nNORMAL BILL BASE ON PER MONTH");
				break;
			case 4:
				total=10*700;
				interest=total*.10;
				fee=total+interest;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  INTEREST   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 5:
				printf("\nTHANKS FOR VISITING US");
				break;
			default:
				printf("\nINVALID CHOICE");
				break;
			}
	printf("\n\nDO YOU WANT TO CHANGE YOUR PLAN?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
	scanf("%d",&transaction);
	system("cls");
	t=1;
}while(transaction!=t);

		}
		printf("\n=================================================================================");
		printf("\n================== PLEASE PRESENT THIS FORM IN REGISTRAR ========================");
		printf("\n=================================================================================");
		printf("\n|NAME    : %15s %15s %15s\t\t\t|",l.fname,l.sname,l.tname);
		printf("\n|ADDRESS : %15s %15s %15s\t\t\t|",l.faddress,l.saddress,l.taddress);
		printf("\n|AGE     : %15s\t\t\t\t\t\t\t|",l.age);
		printf("\n|NUMBER  : %15s\t\t\t\t\t\t\t|",l.cnmbr);
		printf("\n=================================================================================");
		getch();
		break;
	case 6://grade 12
		{
		printf("\nPLEASE ENTER YOU'RE FIRST NAME : ");
		scanf("%s",l.fname);
		printf("\nPLEASE ENTER YOU'RE MIDDLE NAME : ");
		scanf("%s",l.sname);
		printf("\nPLEASE ENTER YOU'RE FAMILY NAME : ");
		scanf("%s",l.tname);
		printf("\nPLEASE ENTER YOU'RE AGE : ");
		scanf("%s",&l.age);
		printf("\nPLEASE ENTER YOU'RE BARANGAY : ");
		scanf("%s",&l.faddress);
		printf("\nPLEASE ENTER YOU'RE MONICIPALITY : ");
		scanf("%s",&l.saddress);
		printf("\nPLEASE ENTER YOU'RE PROVINCE : ");
		scanf("%s",l.taddress);
		printf("\nPLEASE ENTER YOU'RE CONTACT # : ");
		scanf("%s",l.cnmbr);
		getch();
		system("cls");
		}
		{
do
{
			table12();
			printf("PLEASE CHOOCE TUITION FEE PLAN : ");
			scanf("%d",&plan);
			switch(plan)
			{
			case 1:
				total=10*800;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 2:
				total=10*800;
				discount=total*.05;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 3:
				total=0*0;
				discount=total*.10;
				fee=total-discount;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  DISCOUNT   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				printf("\nNORMAL BILL BASE ON PER MONTH");
				break;
			case 4:
				total=10*800;
				interest=total*.10;
				fee=total+interest;
				printf("\n=========================");
				printf("\n|  TOTAL FEE  |  %5d  |",total);
				printf("\n|  INTEREST   |  %5d  |",discount);
				printf("\n|  TO BE PAY  |  %5d  |",fee);
				printf("\n=========================");
				break;
			case 5:
				printf("\nTHANKS FOR VISITING US");
				break;
			default:
				printf("\nINVALID CHOICE");
				break;
			}
	printf("\n\nDO YOU WANT TO CHANGE YOUR PLAN?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
	scanf("%d",&transaction);
	system("cls");
	t=1;
}while(transaction!=t);

		}
		printf("\n=================================================================================");
		printf("\n================== PLEASE PRESENT THIS FORM IN REGISTRAR ========================");
		printf("\n=================================================================================");
		printf("\n|NAME    : %15s %15s %15s\t\t\t|",l.fname,l.sname,l.tname);
		printf("\n|ADDRESS : %15s %15s %15s\t\t\t|",l.faddress,l.saddress,l.taddress);
		printf("\n|AGE     : %15s\t\t\t\t\t\t\t|",l.age);
		printf("\n|NUMBER  : %15s\t\t\t\t\t\t\t|",l.cnmbr);
		printf("\n=================================================================================");
		getch();
		break;
	case 7:
		printf("\nTHANKS FOR VISITING US");
		break;
	default:
		printf("\nINVALID CHOICE");
		break;
	}
printf("\n\nDO YOU WANT ANOTHER TRANSACTION?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
scanf("%d",&transaction);
system("cls");
t=1;
}while(transaction!=t);
_getch();
}
void table()
{
	printf("=============================================================\n");
	printf("|============= PIT TABANGO ONLINE REGESTRATION =============|\n");
	printf("|===========================================================|\n");
	printf("|            YEAR              |      TUITION FEE/MONTH     |\n");
	printf("|===========================================================|\n");
	printf("|         1. GRADE 7           |             300            |\n");
	printf("|         2. GRADE 8           |             350            |\n");
	printf("|         3. GRADE 9           |             450            |\n");
	printf("|         4. GRADE 10          |             500            |\n");
	printf("|         5. GRADE 11          |             700            |\n");
	printf("|         6. GRADE 12          |             800            |\n");
	printf("|         7. QUIT              |                            |\n");
	printf("=============================================================\n");
}
void delay(int n)//delay function
{
	int f;
	for(f=0;f<=n;f++);
}
void greetings()
{
	char g[100]={"GOOD DAY WELCOME TO PIT TABANGO ONLINE REGESTRATION\n\n"};
	int f;
	for (f=0;g[f]!='\0';f++)
	{
		delay(10000000);
		printf("%c",g[f]);
	}
	getch();
	system("cls");
}
void gret()
{
	char s[150]={"HI! DEAR STUDENT "};
	printf("%s",s);
}
void table7()
{
	printf("=============================================================\n");
	printf("|================ GRADE 7 TUITION FEE PLAN =================|\n");
	printf("|===========================================================|\n");
	printf("|            PLAN              |     DISCOUNT & INTEREST    |\n");
	printf("|===========================================================|\n");
	printf("|         1. CASH              |        10%% DISCOUNT        |\n");
	printf("|         2. TWO GIVES         |          5%% DISCOUNT       |\n");
	printf("|         3. NORMAL PAY/M      |         NO DISCOUNT        |\n");
	printf("|         4. EVERY 5/M         |         10%% INTEREST       |\n");
	printf("|         5. QUIT              |                            |\n");
	printf("=============================================================\n");
}
void table8()
{
	printf("=============================================================\n");
	printf("|================ GRADE 8 TUITION FEE PLAN =================|\n");
	printf("|===========================================================|\n");
	printf("|            PLAN              |     DISCOUNT & INTEREST    |\n");
	printf("|===========================================================|\n");
	printf("|         1. CASH              |        10%% DISCOUNT        |\n");
	printf("|         2. TWO GIVES         |          5%% DISCOUNT       |\n");
	printf("|         3. NORMAL PAY/M      |         NO DISCOUNT        |\n");
	printf("|         4. EVERY 5/M         |         10%% INTEREST       |\n");
	printf("|         5. QUIT              |                            |\n");
	printf("=============================================================\n");
}
void table9()
{
	printf("=============================================================\n");
	printf("|================ GRADE 9 TUITION FEE PLAN =================|\n");
	printf("|===========================================================|\n");
	printf("|            PLAN              |     DISCOUNT & INTEREST    |\n");
	printf("|===========================================================|\n");
	printf("|         1. CASH              |        10%% DISCOUNT        |\n");
	printf("|         2. TWO GIVES         |          5%% DISCOUNT       |\n");
	printf("|         3. NORMAL PAY/M      |         NO DISCOUNT        |\n");
	printf("|         4. EVERY 5/M         |         10%% INTEREST       |\n");
	printf("|         5. QUIT              |                            |\n");
	printf("=============================================================\n");
}
void table10()
{
	printf("=============================================================\n");
	printf("|================ GRADE 10 TUITION FEE PLAN ================|\n");
	printf("|===========================================================|\n");
	printf("|            PLAN              |     DISCOUNT & INTEREST    |\n");
	printf("|===========================================================|\n");
	printf("|         1. CASH              |        10%% DISCOUNT        |\n");
	printf("|         2. TWO GIVES         |          5%% DISCOUNT       |\n");
	printf("|         3. NORMAL PAY/M      |         NO DISCOUNT        |\n");
	printf("|         4. EVERY 5/M         |         10%% INTEREST       |\n");
	printf("|         5. QUIT              |                            |\n");
	printf("=============================================================\n");
}
void table11()
{
	printf("=============================================================\n");
	printf("|=============== GRADE 11 TUITION FEE PLAN =================|\n");
	printf("|===========================================================|\n");
	printf("|            PLAN              |     DISCOUNT & INTEREST    |\n");
	printf("|===========================================================|\n");
	printf("|         1. CASH              |        10%% DISCOUNT        |\n");
	printf("|         2. TWO GIVES         |          5%% DISCOUNT       |\n");
	printf("|         3. NORMAL PAY/M      |         NO DISCOUNT        |\n");
	printf("|         4. EVERY 5/M         |         10%% INTEREST       |\n");
	printf("|         5. QUIT              |                            |\n");
	printf("=============================================================\n");
}
void table12()
{
	printf("=============================================================\n");
	printf("|=============== GRADE 12 TUITION FEE PLAN =================|\n");
	printf("|===========================================================|\n");
	printf("|            PLAN              |     DISCOUNT & INTEREST    |\n");
	printf("|===========================================================|\n");
	printf("|         1. CASH              |        10%% DISCOUNT        |\n");
	printf("|         2. TWO GIVES         |          5%% DISCOUNT       |\n");
	printf("|         3. NORMAL PAY/M      |         NO DISCOUNT        |\n");
	printf("|         4. EVERY 5/M         |         10%% INTEREST       |\n");
	printf("|         5. QUIT              |                            |\n");
	printf("=============================================================\n");
}
