#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
    printf("Enter the co-ordinates of first point:");
    scanf("%f %f",x1,y1);
    printf("Enter the co-ordinates of second point:");
    scanf("%f %f",x2,y2);

}
float find_distance(float x1, float y1, float x2, float y2)
{
    float dx,dy;
    dx=x2-x1;
    dy=y2-y1;
    return sqrt((dx*dx)+(dy*dy));
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf(" The difference between point (%f ,%f) and (%f,%f) is %f",x1,y1,x2,y2,distance);
}
int main()
{
    float x1,y1,x2,y2,distance;
    input(&x1,&y1,&x2,&y2);
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}