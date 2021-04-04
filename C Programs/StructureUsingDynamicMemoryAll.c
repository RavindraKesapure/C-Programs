#include<stdio.h>

 struct Student
 {
 	int id;
 	char name[10];
 };
void main()
{
	struct Student *s;
    int n;
	printf("Enter the size of structure");
	scanf("%d",&n);	
	  				
	s=(struct Student *)malloc(n * sizeof(struct Student));  // dynamic memory allocation
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the id and name");
		scanf("%d%s",&(s+i)->id,(s+i)->name);
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n id = %d  name = %s ",(s+i)->id,(s+i)->name);
	}
}


