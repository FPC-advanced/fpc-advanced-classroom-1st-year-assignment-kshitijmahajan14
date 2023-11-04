/*finding whether a number is a composite number*/

#include<stdio.h>
int input_number(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    return n;
}
int is_composite(int n){
    if(n<=1){
        return 1;
    }
    for(int i=2;i*i<=n; i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
void output(int n, int result){
    if(result){
        printf("%d is a composite number.", n);
    }
    else{
        printf("%d is not a composite number.", n);
    }
}

int main(){
    int n=input_number();
    int result=is_composite(n);
    output(n,result);
    return 0;
}