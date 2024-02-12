#include<stdio.h>
int input()
{
    int n;
    printf("Enter the number:");
    scanf(" %d",&n);
    return n;
}
int find_gcd(int a,int b)
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; 
}
void output(int a, int b, int gcd)
{
    printf("the gcd of the numbers is %d\n", gcd);
}
int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}