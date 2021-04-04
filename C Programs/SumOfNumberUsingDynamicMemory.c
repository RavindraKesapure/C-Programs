#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,i,sum=0;
	int *p;
	
	printf("Enter the size of memory\n");
	scanf("%d",&n);

    p=(int *)malloc(n*sizeof(int));

  // p=(int *)calloc(n,sizeof(int));
	
	if(p==NULL)
	{
		printf("\n Not create dynamic memory");
		exit(0);
	}
	else
	{
		printf("\nEnter %d element in memory\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&p[i]);
			sum+=p[i];
		}
	}
	printf("\n Sum of all number %d",sum);
	
	free(p);
}
