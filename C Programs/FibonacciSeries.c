#include<stdio.h>

void main()
{
	 int n,c,a=0,b=1,i;
	 printf("Enter the number\n");
	 scanf("%d",&n);
	 
	printf("%d,",a);
	printf("%d,",b);
	
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
	
      
	 
}
