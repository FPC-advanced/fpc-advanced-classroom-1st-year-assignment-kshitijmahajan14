/*Write a C program to find the sum of _n_ complex numbers*/

#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

// Function to get the size of the array
int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

// Function to input a complex number
Complex input_complex() {
    Complex c;
    printf("Enter the real and imaginary parts of a complex number: ");
    scanf("%lf %lf", &c.real, &c.imag);
    return c;
}

// Function to input n complex numbers
void input_n_complex(int n, Complex c[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

// Function to add two complex numbers
Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}

// Function to add n complex numbers
Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0};
    for (int i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}

// Function to output the result
void output(int n, Complex c[n], Complex result) {
    printf("The sum of the following complex numbers:\n");
    for (int i = 0; i < n; i++) {
        printf("%lf + %lfi\n", c[i].real, c[i].imag);
    }
    printf("is: %lf + %lfi\n", result.real, result.imag);
}

int main() {
    int n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    Complex result = add_n_complex(n, c);
    output(n, c, result);
    return 0;
}
