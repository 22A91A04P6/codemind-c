#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,np,sp,d,e,mp,cp;
    scanf("%d",&n);//n=50
    np=0;
    for(i=1;np<n;i++)//i=6,32<50
    {
        np=pow(2,i);//np=64
        if(np<=n)//64<=50
        {
             cp=np;	//cp=32
		}
    }
    d=n-cp;//d=50-32=18
    sp=n+30;//sp=6
    mp=sp;
    while(mp>n)
    {
        for(i=1;pow(2,i)<=n+30;i++)
        {
            if(mp==pow(2,i))
            {
                sp=mp;
            }
        }
        mp--;
    }
    e=sp-n;
    if(d<e)
    {
        printf("%d",d);
    }
    else
    {
 printf("%d",e);
    }
}
 