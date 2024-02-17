#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
     printf("Enter the points of first co_ordinates:");
    scanf("%f %f",x1,y1);
    printf("Enter the points of second co-ordinates:");
    scanf("%f %f",x2,y2);
    printf("Enter the points of third co-ordinates:");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float area;
    area= 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    return area;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==0)
    {
        printf("The points (%.2f,%.2f),(%.2f,%.2f) and (%.2f,%.2f) do not form a triangle",x1,y1,x2,y2,x3,y3);
        
    }
    else
    printf("The points (%.2f,%.2f),(%.2f,%.2f) and (%.2f,%.2f) form a triangle",x1,y1,x2,y2,x3,y3);
}
int main()
{
    float x1,x2,x3,y1,y2,y3,result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}