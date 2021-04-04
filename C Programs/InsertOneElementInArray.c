#include<stdio.h>
void main()
{
		int a[100];
		int num,pos,element,i;
		printf("Enter the Array Size");
		scanf("%d",&num);
		
		printf("Enter %d Element in Array",num);
		for(i=0;i<num;i++)
		{
			scanf("%d",&a[i]);
		}	
		printf("Enter the position and Element ");
    	                   scanf("%d%d",&pos,&element);
		
		for(i=num-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}	
		a[pos]=element;
		
		printf("After add Value In array");
		for(i=0;i<num+1;i++)
		{
		    printf("%d\n",a[i]);
		}	
	}


