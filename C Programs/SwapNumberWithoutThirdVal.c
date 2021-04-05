#include<stdio.h>

void main()
{
	  int a,b;
	 printf("Enter the two number\n");
	 scanf("%d",&a);
	 scanf("%d",&b);
	

	 a =a+b;
	 b =a-b;
	 a =a-b;
	 
	 printf("a --> %d\n",a);
	 printf("b --> %d",b);
}
