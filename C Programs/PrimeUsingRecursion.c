#include<stdio.h>
int isPrime(int,int);
void main()
{
	int n=7;
	int i=n/2;
	
	int data=isPrime(n,i);
	
	if(data==1)
	{
		printf("Prime Number\n");
	}
	else
	{
		printf("Not Prime");
	}
}

int isPrime(int n,int i)
{
	if(i==1)
	{
		return 1;
	}
	else if(n%i==0)
	{
		return 0;
	}
	else
	{
		i--;
		isPrime(n,i);
	}
}
