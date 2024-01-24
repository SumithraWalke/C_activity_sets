#include<stdio.h>
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the 1st string: ");
    scanf("%s",string1);
    printf("Enter the 2nd string: ");
    scanf("%s",string2);
}
int stringcompare(char *string1,char *string2)
{
    int i=0;
    while(string1[i]==string2[i])
    {
        if(string1[i]=='\0')
        {
            return 0;
        }
        i++;
    }
    return string1[i]-string2[i];
}
void output(char *string1,char *string2,int result)
{
    if(result<0)
    {
        printf("%s is greater than %s",string2,string1);
    }else if (result>0)
    {
        printf("%s is greater than  %s",string1,string2);
    }else
    {
      printf("both the strings are equal \n ");
    }
    
}
int main()
{
    char string1[100],string2[100];
    int result;
    input_two_strings(string1,string2);
    result=stringcompare(string1,string2);
    output(string1,string2,result);
    return 0;
}