#include<stdio.h>
void main()
{
	char name[100];
	char *ptr;
	int vowel=0,consonent=0;
	printf("Enter the string");
	gets(name);	
	ptr=&name;
	
	printf("\nPointer one by one value\n");
	while(*ptr!='\0')
	{
		if(*ptr=='A' || *ptr=='a'|| *ptr=='E' || *ptr=='e'|| *ptr=='I' || *ptr=='i'|| *ptr=='O' || *ptr=='o'|| *ptr=='U' || *ptr=='u')
		{
			vowel++;
		}
		else
		{
			consonent++;
		}
		
		*ptr++;
	}
	
	
	printf("\nNumber of vowel is %d",vowel);
	printf("\nnumber of consonent is %d",consonent);
}
