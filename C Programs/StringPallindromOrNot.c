#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k=0,len,l;
	char ch[20];
	printf("Enter the String");
	gets(ch);
	len=strlen(ch);
	l=len-1;
	j=l/2;
	
	for(i=0;i<j;i++)
	{
		if(ch[i]!=ch[l])
		{
		   break;
		}
		else
		{ 
		   k++;
		   l--;	
	    }
	}
	
	if(k==j)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Pallindrome");
	}
	
}
