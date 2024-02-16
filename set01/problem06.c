/*Write a C program to compare three numbers using **pass by reference*/

#include<stdio.h>

int input(int *num){
    printf("enter a number: ");
    scanf("%d", num);
}

int findlargest(int a, int b, int c, int *lar){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}

int output(int a, int b, int c, int lar){
    printf("the largest number between %d %d and %d is %d", a,b,c,lar);
}

int main(){
    int a,b,c,largest;
    input(&a);
    input(&b);
    input(&c);
    largest=findlargest(a,b,c,&largest);
    output(a,b,c,largest);
    
    return 0;
}