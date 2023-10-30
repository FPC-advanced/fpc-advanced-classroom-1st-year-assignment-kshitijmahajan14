typedef struct {
	float real;
	float imag;
} complex;

complex input_complex(){
    complex c;
    printf("enter the real and imaginary part respectively: ");
    scanf("%f%f", &c.real, &c.imag);
    return c;
}
complex add_complex(complex a, complex b){
    complex sum;
    sum.real = a.real + b.real;
    sum.imag = a.imag + b.imag;
    return sum;
}
void output(complex a, complex b, complex sum){
    printf("the sum of %f + %fi and %f + %fi is %f + %fi\n",a.real,a.imag, b.real, b.imag, sum.real,sum.imag);
}

int main(){
    complex a,b,sum;
    a = input_complex();
    b = input_complex();
    sum = add_complex(a,b);
    output(a,b,sum);
}