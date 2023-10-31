/*find hcf of two numbers*/

#include<stdio.h>
int input(){
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    return n;
}
int find_gcd(int a, int b){
    while(a!=b){
    if(a>b){
        a-=b;
    }
    else{
        b-=a;
    }
    }
    return a;
}
void output(int a, int b, int gcd){
    printf("the gcd of %d and %d is %d", a,b,gcd);
}

int main(){
    int n = input();
    int n1 = input();
    int gcd= find_gcd(n,n1);
    output(n,n1,gcd);
    return 0;
}