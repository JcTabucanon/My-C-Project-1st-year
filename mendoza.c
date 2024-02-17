#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define g "\n\n\nDO YOU WANT TO TRY IT AGAIN: ( yes press any number )( not PRESS 1 ):\n"
void delay(int milliseconds);
void arr(char arr);
void jc(char v);
void z(char z);
void j(char R);
void main()
{
	char s[30]={"\n\n\npress any to continue ^_^"};
	int a,k=0;
	int c,C;
	char choice=0;
do{
	j('R');
	arr('arr');
	jc('v');
while(choice!='Y')
{
	printf("DO YOU WANT TO LEARN SOME BASIC COMPUTER PROGRAMME?(Y/N)");
	scanf_s("%c",&choice);
	system("cls");
	switch(choice)
	{
	case 'Y':
		printf("\n\n\n\n\n\t\t\t\tTHATS GREAT!!!!!");
		delay(1000);
		system("cls");
		printf("\n\n\n\n\n\n\t\t\t\tLETS START ^_^");
		delay(1000);
		system("cls");
		break;
	default:
		printf("\n\n\n\n\n\t\t\t\tOK...ENJOY LIFE ^_^");
		getch();
		delay(1000);
		system("cls");
		break;
	}
}
{
	printf("\n\n\n\n\t\t\t\tTHIS PHRASE CHANGES MY LIFE FOREVER ^_^");
	delay(1500);
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\tHello, World");
	delay(2000);
	system("cls");
}
//printing hello world example
{
	printf("\n\nSYNTAX:\n\n\t#include<header file>\n\n\tmain function()\n\n\topen curly braces'{'\n\n\t\tprint funtion 'printf'(//stamement);\n\n\tclose curly braces'}'");
	printf("%s",s);
	getch();
	system("cls");
}
//CONTROL STUCTURE
{
	printf("\n\n\n\n\t\t\t\tLETS GO ON CONTROL STUCTURE");
	printf("%s",s);
	getch();
	system("cls");
	printf("\n\n\t\t1.IF conditional statement\n\n\t\t2.IF ELSE conditional statement\n\n\t\t3.NESTED IF ELSE conditionl statement");
	printf("%s",s);
	getch();
	system("cls");
}
//if conditional statement
{
	printf("\n1.IF STATEMENT\n");
	printf("\n\n\tSYNTAX:\n\n\t\tif (testExpression)\n\n\t\t{\n\n\t\t\t//statement:\n\n\t\t}");
	printf("%s",s);
	getch();
	system("cls");
}
//if conditional statement example
{

{
	printf(" NOW LETS HAVE SOME EXAMPLE OF IF CONDITIONAL STATEMENT ^_^\n");
	printf("%s",s);
	getch();
	system("cls");
}
do{
{
	printf("USING IF CONDITIONAL STATEMENT\nWE'RE GOING WRITE A PROGRAM THAT WILL ASK YOU IF THE GIVEN NUMBERN IS BIGGER THAN 10\nIF NOT THEN NO OUTPUT \n\nEXPECTED OUTPUT:\nGIVEN NMBER IS BIGGER\n\n");
	printf("\nGIVE NUMBER:\n");
	scanf_s("%d",&c);
	if(10<c)
	printf("OUTPUT = GIVEN NMBER IS BIGGER");
}
	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
	while(k!=a);
	z('z');
	delay(1000);
	system("cls");
}
//if-else statement
{
	printf("\n2. IF-ELSE CONDITIONAL STATEMENT\n\n\n");
	printf("\tSYNTAX:\n\n\tif (testExpression)\n\t{\n\n\t\t//codes inside the body of if\n\n\t}\n\telse\n\t{\n\n\t\t//codes inside the body of else\n\n\t}");
	printf("%s",s);
	getch();
	system("cls");
//if-else example
	printf("\nNOW LETS HAVE EXAMPLE ON IF-ELSE CONDITIONAL STATEMENT\n\n\n");
	printf("%s",s);
	getch();
	system("cls");
do{
{
		printf("EXAMPLE WE'RE GONNA COMPARE TWO NUMBER IF THEY ARE EQUAL OR NOT \nUSING IF-ELSE STATEMENT ^_^\n");
		printf("\nPLEASE ENTER 1st NUMBER:\n");
		scanf_s("%d",&c);
		printf("\nPLEASE ENTER 2nd NUMBER:\n");
		scanf_s("%d",&C);
		if(c==C)
		printf("\nOUTPUT = EQUAL");
		else
		printf("\nOUTPUT = NOT EQUAL");
}
	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
	while(k!=a);
	z('z');
	delay(1000);
	system("cls");
}
//nested if-else
{
	printf("\n3. NESTED IF-ELSE CONDITIONAL STATEMENT\n\n\n");
	printf("\tSYNTAX:\n\n\tif (testExpression)\n\t{\n\n\t\t//statements to be executed if testExprssion1 is true\n\n\t}\n\telse if(testExpression2)\n\t{\n\n\t\t//statements to be executed if testExprssion1 is false and testExprssion2 is true\n\n\t}\n\telse if(testExpression3)\n\t{\n\n\t\t//statements to be executed if testExprssion1 and testExprssion2 is false and testExpression3 is true\n\n\t}\n\telse\n\t{\n\n\t\t//statements to be executed if all testExpressions are false\n\t}");
	printf("%s",s);
	getch();
	system("cls");
//nested if-else example
	printf("\nNOW LETS HAVE EXAMPLE ON IF-ELSE CONDITIONAL STATEMENT\n\n\n");
	printf("%s",s);
	getch();
	system("cls");
do{
{
		printf("EXAMPLE WE'RE GONNA COMPARE TWO NMBER USING NESTED IF-ELSE STATEMENT\nTO IDINTIFY WHICH NMBER IS BIG OR IF THEY ARE EQUAL");
		printf("\n\nPLEASE ENTER 1st NUMBER:\n");
		scanf_s("%d",&c);
		printf("\nPLEASE ENTER 2nd NUMBER:\n");
		scanf_s("%d",&C);
		printf("\n1st NUMBER = %d AND 2nd NUMBER = %d\n",c,C);
		if(c>C)
		printf("\nOUTPUT = N1 IS BIG");
		else if(c<C)
		printf("\nOUTPUT = N2 IS BIG");
		else
		printf("\nOUTPUT = N1 & N2 IS EQUAL");		
}
	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
	while(k!=a);
	z('z');
	delay(1000);
	system("cls");
}

//switch statement
{
	printf("SWITCH STATEMENT : \n");
	printf("\tA switch statement allows a variable to be tested for equality against a list of values.\n");
	printf("\tEach value is called a case, and the vareable being switched on is checked for each switch case.");
	printf("\n\nSYNTAX:\n\n\tswitch(expression)\n\n\t{\n\t\tcase constant-expression :\n\n\t\t\tstatement(s);\n\n\t\t\tbreak;//optional\n\n\t\tcase constant-expression :\n\n\t\t\tstatement(s);\n\n\t\t\tbreak;//optional\n\n\t\t//you can have any number of case statements\n\n\t\tdefualt://optional\n\n\t\t\tstatement(s);\n");
	printf("%s",s);
	getch();
	system("cls");
}
{
	printf("LETS HAVE SOME EXAMPLE OF SWITCH CASE ^_^\n\n");
	printf("Were going to write a c program using switch case statement.\nThat will ask youre favorite flavor of ice cream.\n\n");
do{
	printf("FLAVOR:\t\tCHOICES:\nMILK \t\t1\nCHOCOLATE \t2\nUBE  \t\t3\n\n");
	printf("ENTER YOUR CHOICE : ");
	scanf_s("%d",&c);
	switch(c)
	{
	case 1:
		printf("MILK");
		break;
	case 2:
		printf("CHOCOLATE");
		break;
	case 3:
		printf("UBE");
		break;
	default:
		printf("NONE OF THE ABOVE");
		break;
	}

	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
	while(k!=a);
	z('z');
	delay(1000);
	system("cls");
}
//looping
{
	printf("NEXT IS LOOPING");
	printf("THERE IS 3 TYPES OF LOOPING\n1. FOR LOOP\n2. WHILE LOOP\n3. DO WHILE LOOP");
	printf("%s",s);
	getch();
	system("cls");
}
//for loop
{
	printf("1. FOR LOOP\n-For loops are used in programming to repeat specific block until some end condition is met.");
	printf("\n\nSYNTAX:\n\tfor(initializationStatement;testExprssion;updateStatement)\n\t{\n\t\t//codes\n\t}");
	printf("%s",s);
	getch();
	system("cls");
//for loop example
	printf("LETS HAVE SOME EXAMPLE ^_^\n\n");
	printf("USING FOR LOOP WE'RE GOING TO PRINT THE PRASE 'I LOVE PROGRAMMING'.\n\n");
do{
	printf("DESIDE HOW MANY TIMES TO PRINT THE PRASE 'I LOVE PROGRAMMING':\n");
	scanf_s("%d",&c);
	{
	for(C=1;C<=c;C++)
	{
	delay(500);
	printf("%d = 'I LOVE PROGRAMMING':\n",C);
	}
	}
	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
	while(k!=a);
	z('z');
	delay(1000);
	system("cls");
}
//while loop
{
	printf("2. A while loop in c programming repeatedly execute a target statement as long as a given condition is true.");
	printf("\n\nSYNTAX:\n\twhile(condition)\n\t{\n\t\tstatement(s);\n\t}");
	printf("%s",s);
	getch();
	system("cls");
//while loop example
	printf("LETS HAVE SOME EXAMPLE ^_^\n\n");
	printf("USING FOR WHILE LOOP WE'RE GOING TO PRINT THE PRASE 'I LOVE PROGRAMMING'.\n\n");
do{
	printf("DESIDE HOW MANY TIMES TO PRINT THE PRASE 'I LOVE PROGRAMMING':\n");
	scanf_s("%d",&c);
	C=1;
	while(c>=C)
	{
	delay(500);
	printf("%d = 'I LOVE PROGRAMMING':\n",C);
	C++;
	}
	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
	while(k!=a);
	z('z');
	delay(1000);
	system("cls");
}
//do-while example
{
	printf("3. Unlike for and while loopss,which test the loop condition at the top of the loop.\nThe do while loop in c programming checks its condition at the buttom of the loop.");
	printf("\n\nSYNTAX:\n\tdo\n\t{\n\t\tstatement(s);\n\t}\n\twhile(//condition);");
	printf("%s",s);
	getch();
	system("cls");
//do-while loop example
	printf("LETS HAVE SOME EXAMPLE ^_^\n\n");
	printf("USING DO-WHILE LOOP WE'RE GOING TO PRINT THE PRASE 'I LOVE PROGRAMMING'.\n\n");
do{
	printf("DESIDE HOW MANY TIMES TO PRINT THE PRASE 'I LOVE PROGRAMMING':\n");
	scanf_s("%d",&c);
	C=1;
	do{
	delay(500);
	printf("%d = 'I LOVE PROGRAMMING':\n",C);
	C++;
	}while(c>=C);
	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
while(k!=a);
	printf("\n\n\nCONGRATS YOU'VE FINISH SOME BASIC TOPIC IN C PROGRAMMING LANGUAGE");
	getch();
	delay(1000);
	system("cls");
}
	printf(g);
	scanf_s("%d",&a);
	k=1;
	system("cls");
}
while(k!=a);
	z('z');
	delay(1000);
	system("cls");

getch();
}
//delay function
void delay(int milliseconds)
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
//arry example
void arr(char arr)
{
	int r;
	char zlong[100];
	printf("ENTER YOUR NAME PLEASE : ");
	gets(zlong);
	system("cls");
	printf("HI!! ");
	for(r=0;zlong[r]!='\0';r++)
	{
	delay(250);
	printf("%c",zlong[r]);
	}
	delay(1000);
	printf(" I'M Z YOUR ROBO TEACHER\n");
	delay(1000);
	printf("\nPLEASE PRESS ENTER ^_^");
	getch();
	system("cls");
	
}
//greetings function
void jc(char v)
{
	int r;
	char zlong[150]={"* * * * * * * WELCOME TO I.T. WORLD * * * * * * *"};
	printf("\n\n\n\n\n\t\t\t");
	for(r=0;zlong[r]!='\0';r++)
	{
	delay(100);
	printf("%c",zlong[r]);
	}
	delay(500);
	system("cls");	
}
//conitinue function
void z(char z)
{
	int r;
	char zlong[150]={"OK...LET'S CONTINUE^_^"};
	printf("\n\n\n\n\n\n\t\t\t\t\t");
	for(r=0;zlong[r]!='\0';r++)
	{
	delay(100);
	printf("%c",zlong[r]);
	}
	delay(500);
	system("cls");	
}
void j(char R)
{
	int r;
	char zlong[150]={"* * * * * * * Z's BASIC COMPUTER PROGRAMMING TUTORIAL * * * * * * *"};
	printf("\n\n\n\n\n\t\t\t");
	for(r=0;zlong[r]!='\0';r++)
	{
	delay(100);
	printf("%c",zlong[r]);
	}
	delay(1000);
	system("cls");	
}