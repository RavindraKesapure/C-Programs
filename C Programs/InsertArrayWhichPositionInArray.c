#include<stdio.h>
void main()
{
	int a[30],b[10];
	int i,n,m,pos;
	printf("Enter the first array size\n");
	scanf("%d",&n);
	
	printf("Enter the %d array Element\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the second array size\n");
	scanf("%d",&m);
	
	printf("Enter the %d array Element\n",m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	
	printf("Enter the position u want to insert \n");
	scanf("%d",&pos);
	
	for(i=n-1;i>=pos;i--)
	{
		a[m+i]=a[i];
	}
	for(i=0;i<m;i++)
	{
		a[pos+i]=b[i];
	}
	
	printf("\nDisplay Array Element\n");
	for(i=0;i<m+n;i++)
	{
		printf("\n%d -----> %d ",i,a[i]);
	}
}
