#include<stdio.h>
void main()
{
	char name[100];
	char *ptr;
	printf("Enter the string");
	gets(name);
	
	ptr=&name;
	
	printf("\nPointer one by one value\n");
	while(*ptr!='\0')
	{
		printf("%c",*ptr++);
	}
}
