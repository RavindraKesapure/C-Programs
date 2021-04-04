#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,temp;
	int *p;
	
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;
   p=(int *)malloc(n*sizeof(int));

  // p=(int *)calloc(n,sizeof(int));
	
	if(p==NULL)
	{
		printf("\n Not create dynamic memory");
		exit(0);
	}
	else
	{
		printf("Size of memory %d \n",sizeof(p));
		printf("Enter the Element\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
		}
		
		printf("Display \n");
		for(i=0;i<n;i++)
		{
			printf("\n%d -----> %d",i,p[i]);
		}
	}
	
	printf("\nEnter realloc memory size\n");
	scanf("%d",&n);
	
	   p=(int *)realloc(p,n*sizeof(int));
	   
	    printf("Enter realloc %d memory data",(n-temp));
    	for(i=temp;i<n;i++)
		{
			scanf("%d",&p[i]);
		}
		
		printf("\nDisplay \n");
		for(i=0;i<n;i++)
		{
			printf("\n%d -----> %d",i,p[i]);
		}
	
	
	free(p);
	printf("\nMemory free");
	
}
