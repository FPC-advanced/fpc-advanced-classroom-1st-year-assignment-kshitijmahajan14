#include<stdio.h>

typedef struct{
    float real;
    float imag;
} Complex;

int get_n(){
    int n;
    printf("enter number of complex numbers to be added: ");
    scanf("%d", &n);
    return n;
}
Complex input_complex(){
    Complex c;
    printf("enter real part: ");
    scanf("%f", &c.real);
    printf("enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}

void input_n_complex(int n, Complex c[n]) {
    for(int i = 0; i < n; i++) {
        printf("Enter complex number %d\n", i+1);
        c[i] = input_complex();
    }
}

Complex add_n_complex(int n, Complex c[n]){
    Complex sum;
    for(int i; i<n; i++){
        sum.real += c[i].real;
        sum.imag += c[i].imag;
    }
    return sum;
}
void output(Complex result){
    printf("the sum of all complex numbers is %f is %fi", result.real, result.imag);
}

int main()
{
    int n = get_n();
    Complex c[n];
    input_complex();
    Complex sum= add_n_complex(n,c);
    output(sum);
    return 0;
}

