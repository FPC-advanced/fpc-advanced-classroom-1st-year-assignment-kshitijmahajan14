//2. Write a C program to add two numbers.

#include<stdio.h>

int main(){
    int num1, num2, sum;

    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    sum=num1+num2;

    printf("the sum is %d", sum);

    return 0;
}
