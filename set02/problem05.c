/*find hcf of two numbers*/

#include<stdio.h>
int input(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    return n;
}
int find_gcd(int a, int b);
void output(int a, int b, int gcd);