#include<stdio.h>
#include<conio.h>
void main()
{
	float r,d,a,c;
	printf("enter the radius of circle");
	scanf("%f",&r);
	d=2*r;
	printf("diameter =%f",d);
	a=3.14*(r*r);
	printf("area=%f",a);
	c=2*3.14*r;
	printf("circumference=%f",c);
	getch();
	
}
