#include<stdio.h>
void main()
{
	int i=1;
	while(i<=100)
	{
		if(i%3==0 && i%5==0)
		{
			printf("\n %d devide by 3 & 5",i);
		}
		else if(i%3==0)
		{
			printf("\n %d devide by 3",i);
		}
		else if(i%5==0)
		{
			printf("\n %d devide by 5",i);
		}
	   i++;
	}
}
