#include<stdio.h>
int input()
{
    int n;
    printf("Enter the nth number:\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
   int f0=0,f1=1,f;
   if(n==0)
   {
    return f;
   } 
   for(int i=2;i<=n;i++)
   {
    f=f0+f1;
    f0=f1;
    f1=f;
   }
   return f1;
}
void output(int n,int fibo)
{
    printf("fibo(%d)=%d",n,fibo);
}
int main()
{
   int n,fibo;
   n=input();
   fibo=find_fibo(n);
   output(n,fibo);
   return 0;
}