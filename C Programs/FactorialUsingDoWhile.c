#include<stdio.h>
void main()
{
	int i=1,n,fact=1;
	printf("Enter the Number");
	scanf("%d",&n);
	
	do
	{	
		fact=fact*i;
		i++;
	}
	while(i<=n);
	
	printf("%d factorial is %d",n,fact);
}


