#include<stdio.h>
void main()
{
int a[20],n,i,j,count=-1,temp;
printf("\nEnter the numbers");
scanf("%d",&n);
printf("\nArray values");
for(i=0;i<n;i++)
{
	scanf("\n%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]==a[j])
		{
		   
			temp=a[j];
			
			count=j;
			break;
	    }
	}
}
    if(count!=-1)
   {
	printf("%d",temp);
   }
   else
   {
   	printf("UNIQUE");
   }
}