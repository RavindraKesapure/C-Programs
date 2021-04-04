#include<stdio.h>
void prime1(int,int);
void change(int);

void main()
{
	int n;
	printf("\nEnter the Number");
	scanf("%d",&n);	
	int temp=n;
	prime1(n,temp);	
}

void prime1(int n,int temp)
{
	int i=2;
	
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			prime1(--n,temp);
		   //printf("value of n %d",n);
		}
	}	
	if(i==n)
	{
		printf("\n Small prime number is %d",n);
	    //printf(" temp value %d ",temp);
	    change(temp);
	}
}

void change(int m)
{
	int i=2;
	
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			change(++m);
	    	//	printf("value of n %d",m);
		}
	}		
	if(i==m)
	{
		printf("\n Large prime number is %d",m);
		main();
    }	
}   
