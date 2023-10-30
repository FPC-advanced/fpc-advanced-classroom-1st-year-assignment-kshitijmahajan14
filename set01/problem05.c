/*Write a C program to compare three numbers using pass by value*/

#include<stdio.h>

int input(){
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    return num;
}

int findlar(int num1, int num2, int num3){
    if(num1>=num2 && num1>=num3){
        return num1;
    }
    else if(num2>=num1 && num2>=num3){
        return num2;
    }
    else{
        return num3;
    }
}

int output(int num1,int num2,int num3, int largest){
    printf("the largest number between %d, %d and %d is %d", num1, num2, num3, largest);
}

int main(){
    int num1, num2, num3, lar;

    num1=input();
    num2=input();
    num3=input();
    lar=findlar(num1, num2, num3);
    output(num1,num2,num3,lar);
    return 0;
}