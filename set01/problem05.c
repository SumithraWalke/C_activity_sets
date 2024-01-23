#include<stdio.h>
int input()
{    
    int a,b,c,largest;
    printf("enter the number:\n");
    scanf("%d %d %d",a,b,c);
    return largest;
}

int compare(int a, int b, int c)
{
    int largest;
    if(a>b&&a>c)
    {
        largest=a;
    }
    else 
    if(b>a&&b>c)
    {
        largest=b;
    }
    else 
    {
    largest=c;
    }
    return largest;
}

