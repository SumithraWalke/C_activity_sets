#include<stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the array size:");
    scanf("%d",&n);
    return n;
}
void init_array(int n,int a[n])
{
    for(int i=2;i<=n;i++)
    {
        a[i]=1;
    }
}
void erotosthenes_sieve(int n,int a[n])
{
      for (int j=2;j*j<=n;j++)
       {
        if (a[j] != 0)
         {
            for (int i=j*j;i<=n; i+=j)
             {
                a[i] = 0;
            }
        }
    }
}
void output(int n, int a[n])
{
    printf("the prime number between 2 to %d is  ",n);
    for(int i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            printf("%d",i);
           while(i<n)
            {
                printf(" ");
                break;
            }
        }
    }

}
int main()
{
    int n,a[100];
    n=input_array_size();
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}