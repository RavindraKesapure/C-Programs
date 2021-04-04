#include<stdio.h>
void main()
{
	
	FILE *fp;
	fp=fopen("E:\\angular\\india.txt","w");
  
     if(fp !=NULL)
	 {
		printf("Success......");
	 }
	 else
	 {
	 	printf("Failed....");
	 }
}
