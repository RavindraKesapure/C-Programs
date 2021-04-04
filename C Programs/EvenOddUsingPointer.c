#include<stdio.h>
void main()
{
	int n;
	printf("Enter the Number\n");
	scanf("%d",&n);
	
	evenodd(&n);	

}

int evenodd(int *a)
{
	if(*a%2==0)
		printf("%d is Even Number\n",*a);
	else
		printf("%d is Odd Number\n",*a);
}
