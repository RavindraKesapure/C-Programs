#include<stdio.h>
void main()
{
	
	int i,num,sum=0;
	i=1;
	printf("Enter the Number\n");
	scanf("%d",&num);
	
	while(i<num)
	{
	   if(num%i==0)
	   {
	   	  sum=sum+i;
	   }	
    	i++;
	}
	
	if(sum==num)
	{
		printf("Number is Perfect");
	}
	else
	{
		printf("Number is Not perfect\n");
	}
}
