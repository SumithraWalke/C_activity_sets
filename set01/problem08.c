#include<stdio.h>
int input_array_size()
{
   int n;
   printf("Input array size: ");
   scanf("%d",&n);
   return n; 
}
void input_array(int n,int a[n])
{
    printf("Input the array: ");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_array(int n, int a[n])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    return sum;
}
void output(int n, int a[n],int sum)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d  ",a[i]);
        while(i<n-1)
        {
            printf("+");
            break;
        }
    }
    printf("is %d",sum);
}
int main()
{
    int n,a[100],sum;
    n=input_array_size();
    input_array(n,a);
    sum=sum_n_array(n,a);
    output(n,a,sum);
    return 0;
}