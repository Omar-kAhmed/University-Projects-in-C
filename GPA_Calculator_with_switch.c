#include <stdio.h>

int main () 
{
 int point;
 
 printf("point=");
 scanf("%d", &point);
 
 
switch (point) 
 {
case 1: printf("failed\n"); break;
case 2: printf("ur grade is acceptable\n");break;
case 3: printf("ur grade is good\n");break;
case 4: printf("ur grade is very good\n");break;
case 5: printf("ur grade is perfect\n");break;
default: printf(" please enter a valid GPA between 1 to 5\n");break;
      }
       	return 0;	

}
