#include <stdio.h>
int main()
{
int n, sum=0, count=0,i;

printf("i=\n");
scanf("%d", &i);

fo

printf("n=\n");
scanf("%d", &n);
 while (n!=0)
 {
  sum = sum+n;
  count++;
  printf("n=\n");
  scanf("%d", &n);
  }
  printf("Average=%.2f\n", (float) sum/count);
  return 0;
  }
