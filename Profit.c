#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if(sp-cp>0)
    {
        printf("Profit");
    }
    else
    {
        printf("Loss");
    }
}