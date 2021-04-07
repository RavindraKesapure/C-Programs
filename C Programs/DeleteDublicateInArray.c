#include<stdio.h>
#include<string.h>
void main()
{
	char ch[20];
	int i,j,k,count=0,len;
	printf("Enter the String");
	scanf("%s",ch);
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
	      if(ch[i]==ch[j])
	      {
	      	     for(k=j;k<len;k++)
	      	     {
	      	  	  ch[k]=ch[k+1];
			    len--;
	             }
			
			  j--;
		   }
	    }
	}
	for(i=0;i<len;i++)
	{
		printf("%c",ch[i]);
	}
	
	
}
