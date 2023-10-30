#include <stdio.h>

float input() {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    return num;
}

float square_root(float n) {
    float error = 0.00001; 
    float s=n;

    while ((s - n/s) > error) {
        s = (s + n/s)/2;
    }

    return s;
}

void output(float n, float sqrt) {
    printf("The square root of %.2f is %.2f\n", n, sqrt);
}

int main() {
    float n = input();
    float sqrt = square_root(n);
    output(n, sqrt);
    return 0;
}
