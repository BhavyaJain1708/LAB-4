#include<stdio.h>
int main ()
{
	int i,j,n,a;
	printf("Enter the value of n");
	scanf("%d",&n);
	a=0;
	for(i=0;i<n;i++)
	{
     for(j=0;j<i+1;j++)
     {
     	a++;
     	printf("%d",a);
	 }
	 printf("\n");
	}
	return 0;
}
