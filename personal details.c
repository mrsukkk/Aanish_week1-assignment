#include<stdio.h>
#include<conio.h>
void main()
{
	int roll;
	char name,branch,hobbies;
	printf("enter name,roll,branch,hobbies: ");
	scanf("%s%d%s%s",&name,&roll,&branch,&hobbies);
	printf("my name is %s\n",name);
	printf("my roll is %d\n",roll);
	printf("my branch is %s\n",branch);
	printf("my hobbies are %s\n",hobbies);
	getch();
	
}