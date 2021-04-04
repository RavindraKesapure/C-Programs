#include<stdio.h>
int main()
{
	int i,a[5],sum=0;
	printf("enter the element \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum =%d",sum);
	return 0;
}
