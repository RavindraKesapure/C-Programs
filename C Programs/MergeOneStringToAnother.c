#include<stdio.h>
#include<string.h>
void main()
{
	int i,len1,len2;
	char a[20],b[20];
	printf("Enter the First String\n");
                   scanf("%s",a);
	
	printf("Enter the Second String\n");
                   scanf("%s",b);
	len1=strlen(a);
	len2=strlen(b);
	
		
	for(i=0;i<len2;i++)
	{
		a[len1+i]=b[i];
	}	
	printf("%s",a);	
}
