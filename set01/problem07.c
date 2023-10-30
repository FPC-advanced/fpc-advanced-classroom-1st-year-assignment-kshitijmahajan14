/*Write a C program to find sum of all natural numbers until _n_*/

#include<stdio.h>

int input(){
    int n;
    printf("enter a natural number: ");
    scanf("%d", &n);
    return n;
}

int findsum(int n){
    int sum=0;

    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int output(int n, int sum){
    printf("The sum of all natural numbers up to %d is %d", n, sum);
}

int main(){
    int n=input();
    int sum=findsum(n);
    output(n, sum);
    return 0;
}