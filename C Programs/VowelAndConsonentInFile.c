#include<stdio.h>
void main()
{
	char ch[20];
	int n=0,vowel=0,con=0;
	printf("Enter the String ");
	gets(ch); 
	while(ch[n]!='\0')
	{
	   if(ch[n]=='a' || ch[n]=='A' || ch[n]=='e' || ch[n]=='E' || ch[n]=='i' || ch[n]=='I' || ch[n]=='o' || ch[n]=='O' || ch[n]=='u' || ch[n]=='U')	
	   {
	   	 vowel++;
	   	 printf("\n vowel is  %c ",ch[n]);
	   }
	   else
	   {
	   	 con++;
	   	 printf("\n consonunt is  %c ",ch[n]);
	   }
		
		n++;
	}
	
	printf("\n Name is %s ",ch);
	
	printf("\n number of vowel %d",vowel);
	printf("\n number of consonunt %d",con); 
}
