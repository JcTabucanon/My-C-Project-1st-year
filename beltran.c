#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int p1=6245;
int p2=7245;
int p3=8890;
int p4=11245;
int p5=31245;
float i1=.05;
float i2=.10;
float i3=.15;
float i4=.20;
void delay();
void cp();
void cp1();
void cp2();
void cp3();
void cp4();
void cp5();
void string();
void main()
{
	char name[100],nmber[20],address[150];
	int c;
	float interest,total,bill;
	int t,transaction,choice,item;
	
do{
	cp();
	printf("\nENTER CHOICE : ");
	scanf("%d",&choice);
	system("cls");
	switch(choice)
	{
	case 1://phone 1//
	//p1//
		cp1();
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
	{//PHONE 1//
		case 1://3MONTHS INSTALLMENT//
		{//3m//
			printf("\nHOW MANY PHONE: ");
			scanf("%d",&item);
			interest=((p1*item)*i1);
			total=interest+(p1*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/3;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//3m//
		case 2://6MONTHS INSTALLMENT//
			{//6 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p1*item)*i2);
			total=interest+(p1*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/6;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//6 m//
		case 3://9MONTHS INSTALLMENT//
			{//9 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p1*item)*i3);
			total=interest+(p1*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/9;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//9 m//
		case 4://12 MONTHS INSTALLMENT//
		{//12 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p1*item)*i4);
			total=interest+(p1*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/12;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//12 m//
		case 5:
			{
			printf("\n\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
			getch();
			system("cls");
			break;
			}
		default:
			{
			printf("\n\nINVALID CHOICE");
			getch();
			system("cls");
			break;
			}
	}
	break;//PHONE 1//

	case 2://PHONE 2//
	//p2
		cp2();
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{//PHONE 2//
		case 1://3MONTHS INSTALLMENT//
		{//3m//
			printf("\nHOW MANY PHONE: ");
			scanf("%d",&item);
			interest=((p2*item)*i1);
			total=interest+(p2*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/3;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//3m//
		case 2://6MONTHS INSTALLMENT//
			{//6 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p2*item)*i2);
			total=interest+(p2*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/6;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//6 m//
		case 3://9MONTHS INSTALLMENT//
			{//9 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p2*item)*i3);
			total=interest+(p2*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/9;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//9 m//
		case 4://12 MONTHS INSTALLMENT//
		{//12 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p2*item)*i4);
			total=interest+(p2*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/12;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//12 m//
		case 5:
			{
			printf("\n\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
			getch();
			system("cls");
			break;
			}
		default:
			{
			printf("\n\nINVALID CHOICE");
			getch();
			system("cls");
			break;
			}
	}
	break;//PHONE 2//

	case 3://PHONE 3//
		//p3//
		cp3();
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
	{//PHONE 3//
		case 1://3MONTHS INSTALLMENT//
		{//3m//
			printf("\nHOW MANY PHONE: ");
			scanf("%d",&item);
			interest=((p3*item)*i1);
			total=interest+(p3*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/3;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//3m//
		case 2://6MONTHS INSTALLMENT//
			{//6 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p3*item)*i2);
			total=interest+(p3*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/6;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//6 m//
		case 3://9MONTHS INSTALLMENT//
			{//9 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p3*item)*i3);
			total=interest+(p3*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/9;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//9 m//
		case 4://12 MONTHS INSTALLMENT//
		{//12 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p3*item)*i4);
			total=interest+(p3*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/12;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//12 m//
		case 5:
			{
			printf("\n\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
			getch();
			system("cls");
			break;
			}
		default:
			{
			printf("\n\nINVALID CHOICE");
			getch();
			system("cls");
			break;
			}
	}
	break;//PHONE 3//

	case 4://PHONE 4
		//p1//
		cp4();
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
	{//PHONE 1//
		case 1://3MONTHS INSTALLMENT//
		{//3m//
			printf("\nHOW MANY PHONE: ");
			scanf("%d",&item);
			interest=((p4*item)*i1);
			total=interest+(p4*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/3;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//3m//
		case 2://6MONTHS INSTALLMENT//
			{//6 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p4*item)*i2);
			total=interest+(p4*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/6;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//6 m//
		case 3://9MONTHS INSTALLMENT//
			{//9 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p4*item)*i3);
			total=interest+(p4*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/9;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//9 m//
		case 4://12 MONTHS INSTALLMENT//
		{//12 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p4*item)*i4);
			total=interest+(p4*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/12;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//12 m//
		case 5:
			{
			printf("\n\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
			getch();
			system("cls");
			break;
			}
		default:
			{
			printf("\n\nINVALID CHOICE");
			getch();
			system("cls");
			break;
			}
	}
	break;//PHONE 4

	case 5://PHONE 5//
		//p1//
		cp5();
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
	{//PHONE 1//
		case 1://3MONTHS INSTALLMENT//
		{//3m//
			printf("\nHOW MANY PHONE: ");
			scanf("%d",&item);
			interest=((p5*item)*i1);
			total=interest+(p5*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/3;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//3m//
		case 2://6MONTHS INSTALLMENT//
			{//6 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p5*item)*i2);
			total=interest+(p5*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/6;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//6 m//
		case 3://9MONTHS INSTALLMENT//
			{//9 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p5*item)*i3);
			total=interest+(p5*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/9;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yes//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//9 m//
		case 4://12 MONTHS INSTALLMENT//
		{//12 m//
			printf("\nHOW MANY : ");
			scanf("%d",&item);
			interest=((p5*item)*i4);
			total=interest+(p5*item);
			printf("\nINTEREST    = %f",interest);
			printf("\nTOTAL PRICE = %f",total);
			bill=total/12;
			printf("\n\nDO YOU TO CONTINUE?(yes press 1/no press any number)");
			scanf("%d",&c);
			switch(c)
			{//yess//
			case 1:
				printf("\nPLEASE FILL THIS DOCUMENT FOR REGESTRATION:");
				gets(name);
				printf("\nENTER YOUR NAME      : ");
				gets(name);
				printf("\nENTER YOUR ADDRESS   : ");
				gets(address);
				printf("\nENTER YOUR CONTACT # : ");
				gets(nmber);
				system("cls");
				printf("\nPLEASE PROVIDE THIS DOCUMENT UPON DELIVERY:");
				printf("\nNAME    : %s",name);
				printf("\nADDRESS :%s",address);
				printf("\nNUMBER  :%s",nmber);
				printf("\nPER MNTH:%f",bill);
				getch();
				break;
			default:
				printf("\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
				getch();
				break;
			}//no//
		break;
		}//12 m//
		case 5:
			{
			printf("\n\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
			getch();
			system("cls");
			break;
			}
		default:
			{
			printf("\n\nINVALID CHOICE");
			getch();
			system("cls");
			break;
			}
	}
	break;//PHONE 5//

	case 6:
		{
			printf("\n\nTHANKS FOR VISTING...FEEL FREE TO CHECK OUR PRODUCT'S ANYTIME");
			getch();
			system("cls");
			break;
		}
	default:
		string();
	break;
	}
printf("\n\nDO YOU WANT ANOTHER TRANSACTION?(YES PRESS ANY NUMBER)(NO PRESS 1)\n");
scanf("%d",&transaction);
system("cls");
t=1;
}while(transaction!=t);
_getch();
}
void cp()
{
	printf("THIS ARE THE AVAILABLE ITEM'S FOR INSTALLMENT FOR NOW:\n");
	printf("=============================================================\n");
	printf("|============= ASUS PHONE ONLINE INSTALLMENT ===============|\n");
	printf("|===========================================================|\n");
	printf("|            MODEL             |            PRICE           |\n");
	printf("|===========================================================|\n");
	printf("|   1. ZENFONE 1               |           6,245            |\n");
	printf("|   2. ZENFONE SILFIE          |           7,245            |\n");
	printf("|   3. ZENFONE MAX PRO M1      |           8,890            |\n");
	printf("|   4. ZENFONE MAX PRO M2      |          11,245            |\n");
	printf("|   5. ROG PHONE               |          31,245            |\n");
	printf("|   6. QUIT                    |                            |\n");
	printf("=============================================================\n");
}
void delay()
{
	int f;
	for(f=0;f<=100000000;f++);
}
void cp1()
{
	printf("INSTALLMENT PLAN:\n");
	printf("=============================================================\n");
	printf("|================= ZENFONE 1 INSTALLMENT ===================|\n");
	printf("|===========================================================|\n");
	printf("|        INSTALLMENT           |          INTEREST          |\n");
	printf("|===========================================================|\n");
	printf("|   1. 3 MONTH'S               |           5%%               |\n");
	printf("|   2. 6 MONTH'S               |          10%%               |\n");
	printf("|   3. 9 MONTH'S               |          15%%               |\n");
	printf("|   4. 12 MONTH'S              |          20%%               |\n");
	printf("|   5. QUIT                    |                            |\n");
	printf("=============================================================\n");
}
void cp2()
{
	printf("INSTALLMENT PLAN:\n");
	printf("=============================================================\n");
	printf("|=============== ZENFONE SILFIE INSTALLMENT ================|\n");
	printf("|===========================================================|\n");
	printf("|        INSTALLMENT           |          INTEREST          |\n");
	printf("|===========================================================|\n");
	printf("|   1. 3 MONTH'S               |           5%%               |\n");
	printf("|   2. 6 MONTH'S               |          10%%               |\n");
	printf("|   3. 9 MONTH'S               |          15%%               |\n");
	printf("|   4. 12 MONTH'S              |          20%%               |\n");
	printf("|   5. QUIT                    |                            |\n");
	printf("=============================================================\n");
}
void cp3()
{
	printf("INSTALLMENT PLAN:\n");
	printf("=============================================================\n");
	printf("|============ ZENFONE MAX PRO M1 INSTALLMENT ===============|\n");
	printf("|===========================================================|\n");
	printf("|        INSTALLMENT           |          INTEREST          |\n");
	printf("|===========================================================|\n");
	printf("|   1. 3 MONTH'S               |           5%%              |\n");
	printf("|   2. 6 MONTH'S               |          10%%              |\n");
	printf("|   3. 9 MONTH'S               |          15%%              |\n");
	printf("|   4. 12 MONTH'S              |          20%%              |\n");
	printf("|   5. QUIT                    |                            |\n");
	printf("=============================================================\n");
}
void cp4()
{
	printf("INSTALLMENT PLAN:\n");
	printf("=============================================================\n");
	printf("|============ ZENFONE MAX PRO M2 INSTALLMENT ===============|\n");
	printf("|===========================================================|\n");
	printf("|        INSTALLMENT           |          INTEREST          |\n");
	printf("|===========================================================|\n");
	printf("|   1. 3 MONTH'S               |           5%%               |\n");
	printf("|   2. 6 MONTH'S               |          10%%               |\n");
	printf("|   3. 9 MONTH'S               |          15%%               |\n");
	printf("|   4. 12 MONTH'S              |          20%%               |\n");
	printf("|   5. QUIT                    |                            |\n");
	printf("=============================================================\n");
}
void cp5()
{
	printf("INSTALLMENT PLAN:\n");
	printf("=============================================================\n");
	printf("|================= ROG PHONE INSTALLMENT ===================|\n");
	printf("|===========================================================|\n");
	printf("|        INSTALLMENT           |          INTEREST          |\n");
	printf("|===========================================================|\n");
	printf("|   1. 3 MONTH'S               |           5%%               |\n");
	printf("|   2. 6 MONTH'S               |          10%%               |\n");
	printf("|   3. 9 MONTH'S               |          15%%               |\n");
	printf("|   4. 12 MONTH'S              |          20%%               |\n");
	printf("|   5. QUIT                    |                            |\n");
	printf("=============================================================\n");
}
void string()
{
	char r[]={"\n\n\nINVALID CHOICE"};
	int c;
	for (c=0;r[c]!='\0';c++)
	printf("%c",r[c]);
}