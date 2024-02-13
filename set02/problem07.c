#include<stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base of the triangle:\n ");
    scanf("%f",&t.base);
    printf("Enter the altitude of the triangle:\n");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    t->area = 0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("Area of triangle of base %.2f and altitude %.2f is %.2f",t.base,t.altitude,t.area);  
}
int main()
{
    Triangle t;
    t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}
