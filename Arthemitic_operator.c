// Online C compiler to run C program online
/*
* File name -- Arthemitic_operator.c
* Auth -- Omar-KAhmed
*
*/

#include <stdio.h>

/*
* main - Write a program that reads integers and operators of the C programming language from the standard input line by line, 
* performs the operation indicated by the operator on the scanned/read values and writes the result to the standard output.
*
* Return : Always 0 (success)
*/

int main (){

int num1, num2,n,i;
char op;
int result;

printf("enter the number of operations u want\n");
scanf("%d",&i);

for(n=0;n<i;n++) {
    printf("enter the first number\n");
        scanf("%d",&num1);
    printf("enter the second number\n");
        scanf("%d",&num2);
    printf("enter the operator to be used\n");
        scanf(" %c ",&op);

switch (op){
    case '+':result = num1 + num2;
printf("The answer is:%d\n", result); break;
    case '-': printf("The answer is:%d\n", num1 - num2); break;
    case '%': printf("The answer is:%d\n", num1 % num2); break;
    case '*': printf("The answer is:%d", num1 * num2); break;
    default: printf("try another problem\n"); break;

}
}
    return (0);
}