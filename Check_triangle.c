#include <stdio.h>
#include <math.h>
int main () 
{
 int a,b,c;
 float p, A;
 printf("a=");
 scanf("%d", &a);
  printf("b=");
 scanf("%d", &b);
  printf("c=");
 scanf("%d", &c);
 
 if (a+b>c && b+c>a && a+c>b) 
 {
 	printf(" the trainagle can be constructed\n");
 	p =(a+b+c)/2.0;
 	A = sqrt (p*(p-a)*(p-b)*(p-c));
 	printf( "Area=%.2f/n",A);
 	}
 else {
       printf("the triangle cannot be construtced!\n");
      } 
       	return 0;	

}
