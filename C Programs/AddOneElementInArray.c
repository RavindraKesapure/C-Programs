#include<stdio.h>
main()
{
	int a[20],i,n,pos,value;
	printf("Enter array Size ");
	scanf("%d",&n);
	
	printf("Enter the %d Array Elements ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Position you wants to ");
	scanf("%d",&pos);
	printf("Enter the value ");
	scanf("%d",&value);
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=value;
	printf("Display Array\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",a[i]);
	}
}
