#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void input_n_complex(int n, Complex c[n]) {
    for(int i=0; i<n; i++) {
        printf("Enter complex number %d", i+1);
        c[i] = input_complex();
    }
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0};
    for(int i=0; i<n; i++) {
        sum.real += c[i].real;
        sum.imag += c[i].imag;
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) {
printf(" is (%f + %fi)", result.real, result.imag);
}

int main() {
    int n = get_n();
    Complex c[n];
    input_n_complex(n, c);
    Complex sum = add_n_complex(n, c);
    output(n, c, sum);
    return 0;
}


