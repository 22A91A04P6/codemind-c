#include<stdio.h>
int main()
{
    int n,l,a;
    scanf("%d",&n);
    scanf("%d",&l);
    for(a=1;a<=l;a++)
    {
        if(a%2!=0)
        {
        printf("%d x %d = %d
",n,a,n*a);
        }
    }
}
