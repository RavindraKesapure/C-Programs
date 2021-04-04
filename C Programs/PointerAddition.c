#include<stdio.h>
void main()
{
	
	int a=10,b=20,*p,*q,*r;
	
	p=&a;
	q=&b;
	
	r= p + q;
	
	printf("%d",r);
	
	
}
