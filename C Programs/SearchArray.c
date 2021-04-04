#include<stdio.h>

main()
{
	int a[5],i,n,j,count=0;
	printf("Enter the Array Elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Elements to you wants ");
	scanf("%d",&n);
	
	for(i=0;i<5;i++)
	{
		if(n==a[i])
		{
		      printf("\n%d is available in %d position in array",n,i);
		      count++;
    	                  }
                  }
    
	if(count==0)
	        printf("%d is not Available in array",n);
	
}
