#include<stdio.h>
void main()
{
	int a[20],n,b[10],i,j,count=0;
	printf("Enter the size");
	scanf("%d",&n);
	
	printf("Enter the %d element in array ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		
	for(i=0;i<n;i++)
	{
		for(j=i+1; j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	
	
	for(i=0;i<n;i++)
	{
		if(a[i+1]-a[i]!=1 && a[i+1]!=-1)
		{
			count=a[i+1]-a[i]-1;
			for(j=i;j<count;j++)
			{
				b[j]=b[j+1];
			}
		}
	}
		
	for(i=0;i<count;i++)
	{
		printf("%d",b[i]);
	}
	
}
