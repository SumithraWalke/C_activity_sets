#include<stdio.h>
int input(int *a, int *b, int *c)
 {
    printf("Enter three numbers: ");
    scanf("%d %d %d", a, b, c);
    return 0;
}
void compare(int a, int b, int c, int *largest) 
{
    *largest = a; 
    if (b > *largest) {
        *largest = b;
    }

    if (c > *largest) {
        *largest = c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("the largest among %d,%d,%d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;
}