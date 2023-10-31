/*find area of triangle*/

#include<stdio.h>
typedef struct{
    float base, height, area;
} Triangle;
Triangle input_triangle(){
    Triangle t;
    printf("enter base and height respectively of the triangle: ");
    scanf("%f %f", &t.base, &t.height);
    return t;
}
void find_area(Triangle *t){
    t->area=0.5*t->base*t->height;
}
void output(Triangle t){
    printf("the area of the triangle is %f", t.area);
}

int main(){
    Triangle t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}