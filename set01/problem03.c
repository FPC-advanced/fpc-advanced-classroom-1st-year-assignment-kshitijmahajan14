/*C program to add two numbers using pass by value*/

#include<stdio.h>

int input(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    return num;
}

int findsum(int num1, int num2){
    int sum;
    sum=num1+num2;
    return sum;
}

int output( int num1, int num2, int sum){
    printf("the sum of %d and %d is %d", num1, num2, sum);
}

int main(){
    int n1, n2, add;

    n1=input();
    n2=input();
    add=findsum(n1,n2);
    output(n1,n2,add);

    return 0;
    
}