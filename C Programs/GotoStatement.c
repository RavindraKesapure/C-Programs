#include<stdio.h>

void main()
{
    
   int i=1;
       LOOP:do{
        if(i==15)
        {
	     i=i+1;
	     goto LOOP;
	   }
	   printf("%d\n",i);
	   i++;
   }while(i<=20);
   
}




