#include <stdio.h>
int main()
{
    int a,b[10],i,j=1;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
      scanf("%d",&b[i]);
    }
    for(i=0;i<a;i++)
    {
      printf("%d ",b[i]);
    }
    return 0;
}