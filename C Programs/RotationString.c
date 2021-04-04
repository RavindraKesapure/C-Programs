#include<stdio.h>
#include<string.h>
void main()
{
	int i,n;
	char a[]={'a','b','c','d','e','f'},ch;
	
	n=strlen(a);
	
	ch=a[0]; //a
	
	for(i=1;i<n;i++)
	{
		a[i-1]=a[i];
	}
	
	a[n-1]=ch;	
	
	for(i=0;i<n;i++)
	{
		printf("%c ",a[i]);
	}
	
}
