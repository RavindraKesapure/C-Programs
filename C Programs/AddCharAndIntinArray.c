#include<stdio.h>
void main()
{
	int a[]={1,2,3,4};
	char b[]={'a','b','c','d'};
	
	char c[8];
	int i,k=0;
	for(i=0;i<4;i++)
	{
		if(i<4)
		{
			c[k++]=a[i];
		}
		if(i<4)
		{
			c[k++]=b[i];
		}
	}
	
	for(i=0;i<8;i++)
	{
		printf("%c\t",c[i]);
	}
	
	
}
