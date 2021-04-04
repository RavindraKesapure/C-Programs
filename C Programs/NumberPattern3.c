#include<stdio.h>
void main()
{
	int i,j,k=0,m;
	for(i=1;i<=7;i++)
	{  m=i;
		if(i<=4)
		  k++;
		else
		  k--;
		  
		for(j=1;j>=k;j--)
		{
			 printf("%d",m);
			 --m;
		}
		printf("\n");
	}
	
}
