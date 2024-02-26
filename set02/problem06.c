#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
    printf("enter the string:");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int length;
    for(length=0;str[length]!='\0';length++);
    for(int i=0; i<length; i++)
    {
        rev_str[i]=str[length-1-i];
    }
    rev_str[length]='\0';
    
}
void output(char *a, char *rev_str)
{
    printf("the original string is %s\n",a);
    printf("the reversed string is %s",rev_str);
}
int main()
{
    char a[100];
    char rev_str[100];
    input_string(a);
    str_reverse(a,rev_str);
    output(a,rev_str);
    return 0;
}