
#include<stdio.h>
typedef struct{
    float base, height, area;
} Triangle;

int input_n(){
    int n;
    printf("enter number of triangles: ");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle(){
    Triangle t;
    printf("enter the base and height of triangle: ");
    scanf("%f %f", &t.base, &t.height);
    return t;
}
void input_n_triangles(int n, Triangle t[n]){
    for(int i=0;i<n;i++){
    printf("triangle %d", i+1);
    t[i]=input_triangle();
    }
    return 0;
}
void find_area(Triangle *t){
    t->area=t->base*t->height*0.5;
}
void find_n_areas(int n, Triangle t[n]){
    for(int i=0;i<n;i++){
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n]){
    Triangle smallest = t[0];
    for(int i=0;i<n;i++){
        if (t[i].area < smallest.area){
            smallest=t[i];
        }
    }
    return smallest;
}
void output(int n, Triangle t[n], Triangle smallest){
    printf("the smallest triangle has area %.2f", smallest.area);
}

int main(){
    int n=input_n();
    Triangle t[n];
    input_triangle(t,n);
    input_n_triangles(t,n);
    find_area(t);
    find_n_areas(t,n);
    Triangle smallest = find_smallest_triangle(t,n);
    output(n,t,smallest);

    return 0;
}