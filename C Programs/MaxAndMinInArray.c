#include<stdio.h>
void main()
{
	int a[10];
	int i,n,min,max;
	printf("Enter the Size of Array\n");
	scanf("%d",&n);
	
	printf("Enter the %d Element in Array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	

   for(i=1;i<n;i++)
   {
       
	   if(a[i]>max) 
	   {
	      max=a[i];	
	   }  	
	   
	   
	   if(a[i]<min) 
	   {
	      min=a[i];	
	   }  	
   }


	printf("Max Element in Array %d \n",max);
	
	printf("Min Element in Array %d  \n",min);
	
}
