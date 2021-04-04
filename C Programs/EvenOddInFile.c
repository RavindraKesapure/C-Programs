#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	int ch;
//	int count=0,vow=0,con=0;
	fp=fopen("E:\\data2.txt","r");
	
	 int i = 1;

 // fscanf (fp, "%d", &i);    
  while (!feof (fp))
    {  
      fscanf (fp, "%d", &i);  
      
      
      if(i%2==0)
      {
      	printf("\n Even %d",i);
	  }
	  else
	  {
	   printf("\n odd %d",i);
	  }
      
      
      
      
	 // printf ("\n %d ", i);    
    }
 
	fclose(fp);
}
