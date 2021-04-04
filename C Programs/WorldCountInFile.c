#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	FILE *fp;
	char str[500];
	int count=0,i;
	
	fp=fopen("ravi11.text","r");
	
	if(fp==NULL)
	{
		printf("File not create \n");
		exit(1);
	}	
	for(i=getc(fp);i!=EOF;i=getc(fp))
		count=count+1;	
				;
	fclose(fp);
	printf("\n Total Character in file is %d ",count);
	
	
}
