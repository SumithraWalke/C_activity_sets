#include<stdio.h>
int input_side()
{
    int n;
    printf("enter the sides of the triangle :\n");
    scanf("%d",&n);
    return n;
}
int check_scalene(int a, int b, int c)
{
    if(a!=b && b!=c && c!=a)
    {
        return 1;
    }
    else 
    return 0;
}
void output(int a, int b, int c, int isscalene)
{
    if(a!=b && b!=c && c!=a)
     printf("Triangle with sides %d, %d, and %d is scalene.\n",a,b,c);
     else 
     printf("Triangle with sides %d, %d, and %d is not scalene.\n",a,b,c);
}
int main()
{
    int a,b,c,isscalene;
    a = input_side();
    b = input_side();
    c = input_side();
    isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);
     return 0;
}
