#include<stdio.h>
int input()
{
int num;
printf("enter the number:\n");
scanf("%d",&num);
return num;
}

int compare(int a,int b,int c)
{  
int largest;
if(a>b && a>c)
{
return a; 
}
else if(b>c)
{
    return b;
}
else
{
    return c;
}
}

void output(int a, int b,int c,int largest)
{
printf("the largest number among %d,%d and %d is %d " , a,b,c,largest);
}

int main()
{
int a,b,c,largest;
a=input();
b=input();
c=input();
largest=compare(a,b,c);
output(a,b,c,largest);
return 0;
}