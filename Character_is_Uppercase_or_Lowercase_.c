#include<stdio.h>
int main()
{
    char ch,a,A,z,Z;
    scanf("%c",&ch);
    if(ch>='A' and ch<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(ch>='a' and ch<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}