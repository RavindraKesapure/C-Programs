#include<stdio.h>
#include<stdlib.h>
void main()
{

  char ch[20];
  int i,j,count=0,len;
  printf("Enter the  String value \n");
  scanf("%s",ch);
  len=strlen(ch); 
  
  for(i=0;i<len;i++)
  {
  	count=0;
  	for(j=0;j<len;j++)
  	{
  		
  		if(ch[i]==ch[j] && j<i)
  		{
  			break;
		}
  	                  else if(ch[i]==ch[j])
  		{
  		   count++;	
		}
  		
	}
	
	if(count>0)
	{
		printf("%c value is == %d\n",ch[i],count);
	}
  }
  
  
}
