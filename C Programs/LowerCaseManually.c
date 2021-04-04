#include<stdio.h>
void main()
{
	char ch[20];
	int i=0;
	scanf("%s",ch);
	while(ch[i]!='\0')
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
			ch[i]=ch[i]+32;
		}
		else if(ch[i]>='a' && ch[i]<='z')
		{
			ch[i]=ch[i]-32;
		}
		i++;
	}
	printf("%s",ch);
}
