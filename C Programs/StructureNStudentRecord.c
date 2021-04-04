 #include <stdio.h>
   
    struct Student
	{
        int id;
        char name[30];
       }s[3];
    
    void main()
    {
    	input();
    	output();
	}
	
	void input()
	{
		int i;
		for(i=0;i<3;i++)
		{
			printf("\nEnter id and name of student");
			scanf("%d%s",&s[i].id,s[i].name);
		}
	}
			
	void output()
	{
		int i;
		printf("\nDisplay Student Record");
		for(i=0;i<3;i++)
		{
			printf("\n id =%d and name =%s",s[i].id,s[i].name);
		}
	}
	
