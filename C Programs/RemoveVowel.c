#include<stdio.h>
main()
{
	char ch[20];
	int n=0,vow=0,con=0;
	printf("Enter the String : ");
	gets(ch);
	while(ch[n]!='\0')
	{
		if(ch[n]=='a' || ch[n]=='A' || ch[n]=='e' || ch[n]=='E' || ch[n]=='i' || ch[n]=='I' || ch[n]=='o' || ch[n]=='O' || ch[n]=='u' || ch[n]=='U')
		{
			vow--;
		}
		else
		{
			con++;
			printf("\n consonunt is %c ",ch[n]);
		}
		n++;
	}
	printf("\n Name is %s ",ch);
	printf("\n Number of Consonunt id %d ",con);
}
