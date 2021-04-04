#include<stdio.h>
main()
{
	char ch[15];
	int n=0,vowel=0,con=0,num=0;
	printf("Enter the string :");
	gets(ch);
	while(ch[n]!='\0')
	{
		if(ch[n]=='a' || ch[n]=='A' || ch[n]=='e' || ch[n]=='E' || ch[n]=='i' || ch[n]=='I' || ch[n]=='o' || ch[n]=='O' || ch[n]=='u' || ch[n]=='U')
		{
			vowel++;
			printf("\n Vowels is %c ",ch[n]);
		}
		else if(ch[n]=='0' || ch[n]=='1' || ch[n]=='2' || ch[n]=='3' || ch[n]=='4' || ch[n]=='5' || ch[n]=='6' || ch[n]=='7' || ch[n]=='8' || ch[n]=='9')
		{
			num++;
			printf("\n Number is %c",ch[n]);
		}
		else if()
		{
			con++;
			printf("\n consonunt is %c",ch[n]);
		}
		n++;
	}
	printf("\n Name is %s :",ch);
	printf("\n Number of vowels is %d ",vowel);
	printf("\n number of consonunt is %d ",con);
	printf("\n number of Number is %d ",num);
	
}
