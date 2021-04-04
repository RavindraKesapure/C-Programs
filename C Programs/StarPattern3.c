#include<stdio.h>
void main()
{
	int i,j,k=1;
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i  && k==1)
			{
				printf("*");
				k=0;
			}
			else
			{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}
