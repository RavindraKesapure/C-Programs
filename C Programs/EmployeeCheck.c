#include<stdio.h>
#include<conio.h>
void main()
{
	int id,sal;
	printf("\nEnter Emp Id");
	scanf("%d",&id);
	if(id>=1 && id<=100)
	{
		printf("Enter Employee Salary");
		scanf("%d",&sal);
		if(sal>=10000)
		{
			printf("Permanant Employee");
		}
		else
		{
			printf("Temporary Employee");
		}
	}
	else
	{
		printf("You Are Not Employee");
	}
	getch();
}
