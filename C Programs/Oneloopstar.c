#include<stdio.h>
void main()
{
	int i,j=1;
	
	for(i=1;i<=5;i++)
	{
		if(j<=i)
		{
			printf("*");
			j++;
		}
		
		if(j>i)
		{
			printf("\n");
		//	i++;
			j=1;
		}
		
	}
}
