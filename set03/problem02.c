/*finding whether 3 pts form a triangle*/

#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3){
    printf("enter point 1 coordinates: ");
    scanf("%f %f", x1, y1);
    printf("enter point 2 coordinates: ");
    scanf("%f %f", x2, y2);
    printf("enter point 3 coordinates: ");
    scanf("%f %f", x3, y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3){
    int dist1=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    int dist2=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    int dist3=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));

    if(dist1>=dist2+dist3 || dist2>=dist1+dist3 || dist3>=dist2+ dist1){
        return 1;
    }
    else{
        return -1;
    }
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result){
    if(result>0){
        printf("the 3 points (%f,%f),(%f,%f) and (%f,%f) form a triangle", x1,y1,x2,y2,x3,y3);
    }
    else{
        printf("the 3 points (%f,%f),(%f,%f) and (%f,%f) do not form a triangle", x1,y1,x2,y2,x3,y3);
    }
}