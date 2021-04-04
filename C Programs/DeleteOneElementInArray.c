#include<stdio.h>
main()
{
	int a[20];
	int i,n,pos;
	printf("Enter the Array size : ");
	scanf("%d",&n);
                   printf("\n Enter the Array Element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the Position to you wants to Delete : ");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",a[i]);
	}
}
