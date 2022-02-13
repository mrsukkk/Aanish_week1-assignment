#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	printf("enter two numbers a and b:");
	scanf("%f%f",&a,&b);
	if(a>b)
	{
		printf("a is greater");
	}
	else
	{
		printf("b is greater");
	}
	getch();
}