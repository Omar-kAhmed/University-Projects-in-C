#include <stdio.h>

int main (){

int max, num, x,i;

printf("enter the number of integers u want to type\n");
scanf("%d", &i);
printf("enter the number\n");
scanf("%d", &max);

for (x=0;x<i;x++)
{
  printf("enter numbers\n");
scanf("%d", &num);  
if (num>max) {

max=num;

}}
printf("the max number is :%d\n",max);


return (0);

}