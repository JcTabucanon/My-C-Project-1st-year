#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void thanks(char t);
int s(int a, int b);
void main()
{
	char string[150]={"==========Christian Liquor Store=========="};
	int choices,paliton,sum,sukli,kwarta,Y,k;
	do{
	printf("\t\t\t\t\t%s\n\n\n",string);
	printf("1.Emperador\t\t110\n2.Redhorse\t\t100\n3.GsmBlue\t\t95\n4.The Bar Pink Gin\t120\n5.Tanduay Light\t\t130\n6.Quit\n");
	printf("\nEnter your choice: ");
	scanf("%d",&choices);
	switch(choices)
	{
		case 1:
			printf("\nPila kabook imo Paliton?");
			scanf("%d",&paliton);
			if(paliton<=0)
			printf("\nPataka rakag pili");
			else 
			{
			sum=paliton*110;
			printf("\nImong bayronon = %d",sum); 
			printf("\nPila man imong kwarta:");
			scanf("%d",&kwarta);
			if(kwarta<sum)
				printf("\ndi kaigo imong kwarta");
			else
			{
			
			printf("\nimong sukli %d",s(sum,kwarta));
			}
			}
			break;
		case 2:
			printf("\nPila kabook imo Paliton?");
			scanf("%d",&paliton);
			if(paliton<=0)
			printf("\nPataka rakag pili");
			else 
			{
			sum=paliton*100;
			printf("\nImong bayronon = %d",sum); 
			printf("\nPila man imong kwarta:");
			scanf("%d",&kwarta);
			if(kwarta<sum)
				printf("\ndi kaigo imong kwarta");
			else
			{
			sukli=kwarta-sum;
			printf("\nimong sukli %d",s(sum,kwarta));
			}
			}
			break;
		case 3:
			printf("\nPila kabook imo Paliton?");
			scanf("%d",&paliton);
			if(paliton<=0)
			printf("\nPataka rakag pili");
			else 
			{
			sum=paliton*95;
			printf("\nImong bayronon = %d",sum); 
			printf("\nPila man imong kwarta:");
			scanf("%d",&kwarta);
			if(kwarta<sum)
				printf("\ndi kaigo imong kwarta");
			else
			{
			sukli=kwarta-sum;
			printf("\nimong sukli %d",s(sum,kwarta));
			}
			}
			break;
		case 4:
			printf("\nPila kabook imo Paliton?");
			scanf("%d",&paliton);
			if(paliton<=0)
			printf("\nPataka rakag pili");
			else 
			{
			sum=paliton*120;
			printf("\nImong bayronon = %d",sum); 
			printf("\nPila man imong kwarta:");
			scanf("%d",&kwarta);
			if(kwarta<sum)
				printf("\ndi kaigo imong kwarta");
			else
			{
			sukli=kwarta-sum;
			printf("\nimong sukli %d",s(sum,kwarta));
			}
			}
			break;
		case 5:
			printf("\nPila kabook imo Paliton?");
			scanf("%d",&paliton);
			if(paliton<=0)
			printf("\nPataka rakag pili");
			else 
			{
			sum=paliton*130;
			printf("\nImong bayronon = %d",sum); 
			printf("\nPila man imong kwarta:");
			scanf("%d",&kwarta);
			if(kwarta<sum)
				printf("\ndi kaigo imong kwarta");
			else
			{
			sukli=kwarta-sum;
			printf("\nimong sukli %d",s(sum,kwarta));
			}
			}
			break;
		case 6:
			printf("\nPauli sa inyo murag man kag nawng bagtak sa lamok");
			break;
		default:
			printf("pataka rakag pindot potol kamot nimo ron ahhhhh");
			break;
	}
			printf("\ngusto paka mopalit(gusto pa press any number)(kung dili na 1)");
			scanf("%d",&Y);
			system("cls");
			k=1;
	}while(k!=Y);
		thanks('t');
	_getch();
}
int s(int a, int b)
{
	int s;
	s=b-a;
	return s;
}
void thanks(char t)
{
	int w,delay;
	char ty[100]={"\n\n\t\tthank you come again!!!!"};
	for(w=0;ty[w]!='\0';w++)
	{
		for(delay=0;delay<=10000000;delay++);
		printf("%c",ty[w]);
	}
}