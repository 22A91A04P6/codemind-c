#include <stdio.h>
int main(void)
{
//Programme to Find the L.C.M of n numbers
int i,n,j,l=0, k=0;
scanf("%d",&n);
int a[100];
for(i=1;i<=n;i++)
{
scanf( "%d",&a[i]); //To Scan Number in array
}
for( i=1;l<2;i++)
{
k=0;
for( j=1;j<=n;j++)
{
if(i%a[j]==0)
k++;
}
if(k==n)
{
printf("%d",i );l=3;
}
}
return 0;
}