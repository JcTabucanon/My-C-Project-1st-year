//SIMPLE DIGITAL CLOCK PROGRAM MADE BY JC//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void resetsecond(int hour,int minute);
void resetminute(int hour);
void digitalclock();
void digitaltimer();
void timerminute(int hour,int minute);
void timerhour(int hour);
enum clock{
	timer,
	clock
}c;
void main()
{
start:
	system("cls");
	printf("=======================\n");
	printf("[ PLEASE SELECT A MOD ]\n");
	printf("=======================\n");
	printf("[  1. TIMER CLOCK     ]\n");
	printf("=======================\n");
	printf("[  2. DIGITAL CLOCK   ]\n");
	printf("=======================\n");
	printf(": ");
	scanf_s("%d",&c);
	system("cls");
	switch(c)
	{
	case timer+1:
		digitaltimer();	
		goto start;
	case clock+1:
		digitalclock();
	default:
		goto start;
	}
}
void digitalclock()
{
	int h,m,s,ms,ml;
	hour:
	printf("ENTER HOUR   : ");
	scanf_s("%i",&h);
	system("cls");
	if(h<1||h>12)
	{
		printf("INVALID HOUR");
		_getch();
		system("cls");
		goto hour;
	}
minute:
	printf("ENTER MINUTE : ");
	scanf_s("%i",&m);
	system("cls");
	if(m<0||m>59)
	{
		printf("INVALID MINUTE");
		_getch();
		system("cls");
		goto minute;
	}
second:
	printf("ENTER SECOND : ");
	scanf_s("%i",&s);
	system("cls");
	if(s<0||s>59)
	{
		printf("INVALID SECOND");
		_getch();
		system("cls");
		goto second;
	}
	for(s;s<60;s++)
	{
		for(ms=1;ms<=11;ms++)
		{
			for(ml=1;ml<=1;ml++)
			{
				system("cls");
				printf("%d:%d:%d\n",h,m,s);
			}
		}
	}
	resetsecond(h,m+1);
reset:
	for(h=1;h<=12;h++)
	{
		for(m=0;m<60;m++)
		{
			for(s=0;s<60;s++)
			{
				for(ms=1;ms<=11;ms++)
				{
					for(ml=1;ml<=1;ml++)
					{
						system("cls");
						printf("%d:%d:%d\n",h,m,s);
					}
				}
			}
		}
	}
goto reset;
}
void resetsecond(int hour,int minute)
{
	int s,ms,ml;

	for(minute;minute<60;minute++)
	{
		for(s=0;s<60;s++)
		{
			for(ms=1;ms<=11;ms++)
			{
				for(ml=1;ml<=1;ml++)
				{
					system("cls");
					printf("%d:%d:%d\n",hour,minute,s);
				}
			}
		}
	}
	resetminute(hour+1);
}
void resetminute(int hour)
{
	int s,ms,ml,minute;

	for(hour;hour<=12;hour++)
	{
		for(minute=0;minute<60;minute++)
		{
			for(s=0;s<60;s++)
			{
				for(ms=1;ms<=11;ms++)
				{
					for(ml=1;ml<=1;ml++)
					{
						system("cls");
						printf("%d:%d:%d\n",hour,minute,s);
					}
				}
			}
		}
	}
}
void digitaltimer()
{
	int h,m,s,ms,ml;
	hour:
	printf("ENTER HOUR   : ");
	scanf_s("%i",&h);
	system("cls");
	if(h<0||h>12)
	{
		printf("INVALID HOUR");
		_getch();
		system("cls");
		goto hour;
	}
minute:
	printf("ENTER MINUTE : ");
	scanf_s("%i",&m);
	system("cls");
	if(m<0||m>59)
	{
		printf("INVALID MINUTE");
		_getch();
		system("cls");
		goto minute;
	}
second:
	printf("ENTER SECOND : ");
	scanf_s("%i",&s);
	system("cls");
	if(s<0||s>59)
	{
		printf("INVALID SECOND");
		_getch();
		system("cls");
		goto second;
	}
	for(s;s>=0;s--)
	{
		for(ms=11;ms>=1;ms--)
		{
			for(ml=1;ml>=1;ml--)
			{
				system("cls");
				printf("%d:%d:%d\n",h,m,s);
			}
		}
	}
	timerminute(h,m-1);
	_getch();
}
void timerminute(int hour,int minute)
{
	int s,ms,ml;

	for(minute;minute>=0;minute--)
	{
		for(s=59;s>=0;s--)
		{
			for(ms=11;ms>=1;ms--);
			{
				for(ml=1;ml<=1;ml++)
				{
					system("cls");
					printf("%d:%d:%d\n",hour,minute,s);
				}
			}
		}
	}
	timerhour(hour-1);
}
void timerhour(int hour)
{
	int s,ms,ml,minute;

	for(hour;hour>=0;hour--)
	{
		for(minute=59;minute>0;minute--)
		{
			for(s=59;s>0;s--)
			{
				for(ms=11;ms>=1;ms--)
				{
					for(ml=1;ml<=1;ml++)
					{
						system("cls");
						printf("%d:%d:%d\n",hour,minute,s);
					}
				}
			}
		}
	}
}