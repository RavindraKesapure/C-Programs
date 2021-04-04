#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	
	fp=fopen("E:\\india.txt","w");
	
	fprintf(fp,"File data insert or not..\n");
	
	fputs("This is fputs function data ..\n",fp);
	
	printf("success...");
	
	fclose(fp);
}
