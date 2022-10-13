#include <stdio.h>
int main (){

 int i, n, sum, prod;
 printf("n=\n");
 scanf("%d", &n);
 for (i = 1; i <= n; i++) {
  printf("%d %d\n", i, i*i);
    sum=sum+i;
    prod=prod*i;
 }
    printf("Sum=%d\nProd=%d\n",sum,prod);
     return 0;
 }
