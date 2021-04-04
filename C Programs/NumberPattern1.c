#include<stdio.h>
void main()
{
	int i,j,k=0;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			prinf("%d ",k);
			k=k+5;
		}
		printf("\n");
	}
	
	getch();
}
