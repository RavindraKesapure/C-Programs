#include<stdio.h>
void main()
{
	char ch[20],ch1[20],ch2[40];
	int i=0,j=0,k=0;
	printf("Enter the first String\n");
	scanf("%s",ch);
	printf("Enter the second String\n");
	scanf("%s",ch1);
	j=0;
	while(ch[i]!='\0')
	{
		ch2[j]=ch[i];
		j+=2;
		i++;
	}
	j=1;
	while(ch1[k]!='\0')
	{
		ch2[j]=ch1[k];
		j+=2;
		k++;
	}
    printf("Display Alternative Array %s",ch2);
    
    
} 

