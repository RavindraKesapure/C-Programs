#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int vowel=0,con=0,count=0;
	fp=fopen("fileread.c","r");
	char ch;
	
	while(ch !=EOF)
	{
		ch=fgetc(fp);
		
		if(ch=='A' || ch=='a' || ch=='E' || ch=='e'|| ch=='I' || ch=='i'|| ch=='O' || ch=='o'|| ch=='U' || ch=='u')
		{
			vowel++;
		}
		else if(ch>='A'||ch>='a' && ch<='Z'|| ch<='z')
		{
			con++;
		}
	
	  	count++;
	}
	
	printf("\nNo of Vowel is %d ",vowel);
	printf("\n No of consonenet is %d",con);
	
	printf("\n Total no of charecter in file %d",count);
	
}
