#include<stdio.h>
int input_array_size()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[n]);
}
int sum_composite_numbers(int n, int a[n])
{
   int sum=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]>1)
      {
      for(int j=2;j<=a[i]/2;j++)
      {
        if(a[i]%j==0){
         sum+=a[i];
         break;
        }
      }
      }
    }
}
void output(int sum)
{
    printf("the sum of the numbers are %d",sum);
}
int main()
{
    int n,sum,a[100];
    n=input_array_size();
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}
