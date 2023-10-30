/*Write a program to find the area of a triangle.*/

#include<stdio.h>

void input(float *base, float *height){
    printf("enter the height of triangle: ");
    scanf("%f", height);
    printf("enter the base of triangle: ");
    scanf("%f", base);
}
void find_area(float base , float height, float *area){
    *area=0.5*base*height;
}
void output(float base, float height, float area){
    printf("the area of the triangle with base %.2f and height %.2f is %.2f units.", base, height, area);
}

int main(){
    float base, height, area;

    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);

    return 0;
}