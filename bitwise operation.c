#include <stdio.h>
int main()
 {
   unsigned int a,b;	  	
   printf("Enter two numbers : \n");
   scanf("%d%d",&a,&b);	
   int c = 0;           
   c = a & b;       
   printf("Line 1 - Value of c is %d\n", c );
   c = a | b;       
   printf("Line 2 - Value of c is %d\n", c );
   c = a ^ b;       
   printf("Line 3 - Value of c is %d\n", c );
  c = ~a;         
   printf("Line 4 - Value of c is %d\n", c );
   c = a << 2;     
   printf("Line 5 - Value of c is %d\n", c );
   c = a >> 2;     
   printf("Line 6 - Value of c is %d\n", c );
}
