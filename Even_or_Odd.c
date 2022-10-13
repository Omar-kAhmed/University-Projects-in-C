#include <stdio.h>
int main()
{
int n, sum=0, count=0;
printf("n=\n");
scanf("%d", &n);
 while (n!=0)
 {
  if(n%2==0)
  printf("%d is even\n",n);
else 
printf( "%d is odd\n",n); 
  printf("n=\n");
  scanf("%d", &n);
  }
  return 0;
  }
