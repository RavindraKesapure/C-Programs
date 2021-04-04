#include<stdio.h>
void main()
{
	int i,j,k=5;
	for(i=1;i<=7;i++)
	{
		if(i<=4)
			k--;
		else
			k++;
			
		for(j=1;j<=k;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
