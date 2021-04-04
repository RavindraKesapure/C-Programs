  
   #include<stdio.h>
   void rec(int,int);
   void main()
   {
   	  int n=10,i=1;
   	  rec(n,i);
   	  printf("\n End The Recursion");  //after compilation recurtion function
   } 
   void rec(int n,int i)
   {
   	    if(i<=n)
   	    {
   	    	printf("\n%d",i);
   	    	rec(n,++i);
	    }
   }
