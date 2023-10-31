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
    
}
void output(Triangle t);