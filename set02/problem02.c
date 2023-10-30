/*checking if a triangle is scalene*/

#include<stdio.h>

int input_side(){
    int n;
    printf("enter side length: ");
    scanf("%d", &n);
    return n;
}
int check_scalene(int a, int b, int c){
    return a!=b && b!=c && c!=a;
}
void output(int a, int b, int c, int isscalene){
    if(isscalene){
        printf("triangle with sides %d %d %d is scalene", a,b,c);
    }
    else{
        printf("triangle with sides %d %d %d is not scalene",a,b,c);
    }
}

int main(){
    int a =input_side();
    int b = input_side();
    int c = input_side();
    int isscalene = check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}