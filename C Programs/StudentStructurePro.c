#include<stdio.h>

struct Student
{
	int id;
	char name[30];
	float mark;
};

void main()
{
 	struct Student s[3];
 	int i=0;
 	for(i=0;i<3;i++)
 	{

      	printf("Enter %d first id name and mark\n",i+1);
    	scanf("%d%s%f",&s[i].id,s[i].name,&s[i].mark);
   	 }
   	 
	printf("\nStudent Record\n");
	printf("\n==============================================================================");
	for(i=0;i<3;i++)
 	{
 		printf("\n-----------------------------------------------------------------------------");
 		printf("\n");
		printf("| %d\t",s[i].id);
		printf("| %s\t",s[i].name);
		printf("| %f\t|",s[i].mark);
    }
    printf("\n==============================================================================");

}
