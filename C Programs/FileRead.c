#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>

void main()
{
	FILE *fp;
	char str[500];
	int count=0;
	
	fp=fopen("23.c","r");
	
	if(fp==NULL)
	{
		printf("File not create \n");
		exit(1);
	}	
	
	while(fgets(str,500,fp) != NULL )
	{
		 printf("%s",str);
		 ++count;
	//	 sleep(1);
	}
	printf("\n Count %d ",count);
	fclose(fp);
	
}
