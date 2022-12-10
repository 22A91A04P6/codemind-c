#include<stdio.h>
int main()
{
    int a[100],maximum,size,c,location=1;
    scanf("%d",&size);
    for(c=0;c<size;c++)
    scanf("%d",&a[c]);
    maximum=a[0];
    for(c=1;c<size;c++)
    {
      if(a[c]>maximum)
      {
          maximum=a[c];
          location=c+1;
      }
    }
    printf("%d
",maximum);
    return 0;
}