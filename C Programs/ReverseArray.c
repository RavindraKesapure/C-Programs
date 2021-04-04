#include<stdio.h>
void main()
{
	int a[10],n,count,i,j;
	printf("Enter array Size in Array");
	scanf("%d",&n);
	
	printf("Enter the %d element in array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}		
	
	i=0,j=n-1;	
	while(i<j)
	{
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		
		i++;
		j--;
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
}
