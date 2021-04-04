#include<stdio.h>

void main()
{
	 int n,i,r,sum=0,temp,count=0,arm=0,d;
	 printf("Enter the number\n");
	 scanf("%d",&n);
	 
	 temp = n;
	 while(temp > 0)
	 {
	 	temp = temp / 10;
	 	count++;
	 }
	 temp = n;
	 while(temp > 0)
	 {
	 	  r = temp % 10;
	 	  arm=1;
	 	  i=1;
	 	  while(i <= count)
	 	  {
	 	  	 arm = arm * r ;  
	 	  	 i++;
		  }
		  sum = sum + arm;
		  temp = temp/10;
	 }	 
	 if(n == sum)
	 {
	 	printf("%d is Armstrong Number ",n);
	 }
	 else
	 {
	 	printf("%d is not Armstrong Number ",n);
	 }
	 
}
