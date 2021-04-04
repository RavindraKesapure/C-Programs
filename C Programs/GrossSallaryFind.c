#include<stdio.h>

void main()
{
	int basic, Da,Hra;
	float gross=0;
	printf("Enter the Basic Salary \n");
	scanf("%d",&basic);
	Salary(basic,Da,Hra,gross);
}
void Salary(int basic,int Da,int Hra,float gross)
{
//	if(basic!=0)
//
//	{
		Da = basic * 30;
		Hra = basic * 30;
	//}
	gross = basic + Hra + Da;
	printf("Gross Salary is %2f",gross);
}
