#include<stdio.h>
void main()
{
	int i,j,k=6;
	for(i=1;i<=10;i++)
	{
	   if(i<=5)
	      k--;
	   else
	       k++;
	  	for(j=1;j<=k;j++)
	  	{
	  		if(k==1 && i==5)
	  		{
			   k=0;			  
			}
	  		printf("%d",j);
	    }
	    
	    printf("\n");
	}
	
}
