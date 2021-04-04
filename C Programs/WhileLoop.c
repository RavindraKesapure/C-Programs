#include<stdio.h>
void main()
{
	int i=1,n,k;	
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=10)
	{
		k=n*i;
		printf("\n%d",k);
		i++;
	}
}
