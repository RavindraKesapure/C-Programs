#include<stdio.h>

void main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		 printf("%d is Leaf year ",n);
	}
	else
	{
		printf("%d i not leaf year ",n);
	}

	 
}
