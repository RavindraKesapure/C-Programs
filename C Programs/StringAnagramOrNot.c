#include<stdio.h>
#include<string.h>
void main()
{
	char ch[20],ch1[20];
	int i,j,k,count=0,len,len1;
	printf("Enter the First String\n");
	scanf("%s",ch);
	len=strlen(ch);
	
	printf("Enter the Second String\n");
	scanf("%s",ch1);
	len1=strlen(ch1);
	
	if(len==len1)
	{
	for(i=0;i<len;i++)
	{
		for(j=0;j<len1;j++)
		{
		 /* if(j<i && ch[i]==ch1[j])
		  {
		  	break;
		  }  */
	      if(ch[i]==ch1[j])
	      {
	      	count++;
	      	break;
		  }
	    }
	}	
   }	
    printf("\ncount value is %d\n ",count);
    if(count==len)
	{
		 printf("\nAnagrams string"); 
	}	
	else
	{
		printf("\nNot Anagrams string");
	}
}
