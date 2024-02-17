#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void timer(int time);
void verify();
void password();
main()
{
	int v;

	
	password();
	printf("enter a bu:");
	scanf("%i",&v);
	printf("s=%i",v);
}
void password()
{
	const int max=15;
	char pass[max],user[max];
	char u[max],p[max];
	char ps,us;
	int point=0;
	b:
	printf("ENTER USERNAME : ");
	
password:
	system("cls");
{
	printf("USERNAME : ");
	gets(user);
	printf("PASSWORD : ");
	gets(pass);

	if(strcmp(pass,p)==0&&strcmp(user,u)==0)
	{
		goto proceed;
	}
	else if(strcmp(pass,p)==1)
	{
		printf("\nWrong Password\n");
		getch();
		goto password;
	}
	else if(strcmp(user,u)==1)
	{
		printf("\nWrong Username\n");
		getch();
		goto password;
	}
	else
	{
		printf("\nPlease Input Password &");
		printf("\nPlease Input Username\n");
		getch();
		goto password;
	}
}
proceed:
	verify();
}
void timer(int time)
{
	int i;
	for (i=1;i<=time;i++);
}
void verify()
{
	int n=9;
	int c;
	printf("Verifying");
	for(c=1;c<=n;c++)
	{
		timer(100000000);
		printf(". ");
	}
	system("cls");
	printf("COMPLETE.....press any key to continue");
	getch();
	system("cls");
}
