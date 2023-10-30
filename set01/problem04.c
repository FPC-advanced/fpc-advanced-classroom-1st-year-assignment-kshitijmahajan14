/*Write a C program to add two numbers using pass by reference*/

#include<stdio.h>

int input(int *num){
    printf("enter number: ");
    scanf("%d", num);
}

int findsum(int num1, int num2, int *sum){
    *sum=num1+num2;
}

int output(int num1,int num2, int sum){
    printf("the sum of %d and %d is %d", num1, num2, sum);
}

int main(){
    int num1, num2, sum;

    input(&num1);
    input(&num2);
    findsum(num1, num2, &sum);
    output(num1, num2, sum);
    return 0;
}