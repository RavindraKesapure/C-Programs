#include<stdio.h>
void main()
{
	int a[5],i,j;
	printf("Enter the array Element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	
	}
	int temp=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
	               {
	    	if(a[i]<a[j])
	    	{
	    		temp=a[i];
	    		a[i]=a[j];
	    		a[j]=temp;
	                   }
	              }
	} 
	
	printf("Display the array Element");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	
	}  
	
} 

