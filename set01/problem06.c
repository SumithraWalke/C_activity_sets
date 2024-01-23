#include<stdio.h>
void input(int *a, int *b, int *c)
{
    printf("Enter the numbers:\n");
    scanf("%d %d %d",a,b,c);

}
void compare(int a,int b,int c,int *largest)
{
    if (a>b&&a>c)
    {
        *largest=a;
    }
    if(b>a&&b>c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
}
