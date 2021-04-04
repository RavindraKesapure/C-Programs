#include<stdio.h>
int main()
{
	int a;
                   printf("Enter the Marks\n");
                   scanf("%d",&a);

	if(a>=75)
	{
		printf("distinct");
	}
	else if(a>=60  &&  a<75)
	{
		printf("first class");
	}
	else if(a>=45  &&  a<60)
	{
		printf("second class");
	}	
                  else if(a>=35)
	{
		printf("pass");
	}	
	else
	{
		printf("fail");
	}	
}
