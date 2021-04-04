#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter values");
	scanf("%d%d",&a,&b);
	printf("\n1:Addition");
	printf("\n2:Substraction");
	printf("\n3:Multiplication");
	printf("\n4:Division");
	printf("\n5:Modulas");
	//printf("\n6:Exit");
	printf("\nEnter Your Choice\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			printf("\nAddition is = %d",a+b);
			break;
		case 2:
			printf("\nSubstraction is = %d",a-b);
			break;
		case 3:
		    printf("\nMultiplication is = %d",a*b);
			break;	
		case 4:
		    printf("\nDivision is = %d",a/b);
			break;	
		case 5:
		    printf("\nModulas is = %d",a%b);
			break;
				
		default:
			printf("Wrong Choice");
	}
	getch();
}
