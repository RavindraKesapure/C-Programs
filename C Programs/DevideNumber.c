#include<stdio.h>
void main()
{
	int a;
	printf("Enter the Number\n");
	scanf("%d",&a);
	
	if(a%3==0)
	{
		printf("A is Devide by 3");
	}
	else if(a%5==0)
	{
		printf("A is devide By 5");
	}
	else if(a%7==0)
	{
		printf("A is devide By 7");
	}
	else
	{
		printf("Not devide 3 5 7");
	}
}
