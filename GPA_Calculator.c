#include <stdio.h>

int main () 
{
 int point;
 
 printf("point=");
 scanf("%d", &point);
 
 
 if (point <0 || point>100) 
 {
 	printf(" Default value!\n");
 	
 	}
 else if (point <=20)
       printf("failed!\n");
       else if (point <=40)
       printf("grades is 2!\n");
       else if (point <=60)
       printf("grade is 3!\n");
       else if (point <=80)
       printf("grade is 4\n");
       
       else 
       printf("grade is 5\n");
      
       	return 0;	

}
