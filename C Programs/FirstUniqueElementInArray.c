#include<stdio.h>
void main()
{
	int a[10],i,n,j;	
	
	printf("Enter the Second array Size");
	scanf("%d",&n);

   	printf("Enter the First %d Array Element ",n);	
   	for(i=0;i<n;i++)
   	{
   	    scanf("%d",&a[i]);
    }
    
    
   for(i=0;i<n;i++)
   {
   	  int count=0;
   	  for(j=0;j<n;j++)
   	  {
   	  	    if(a[i]==a[j])
   	  	    {
   	  	    	count++;
		    }	 
	  }
	  if(count==1)
	  {
	  	printf("First Unique No is %d ",a[i]);
	  	break;
	  }
   }  
}
