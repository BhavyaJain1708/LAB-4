#include<stdio.h>
int main ()
{
	int i,j,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	if(i%2==0)
	{
	for(j=0;j<6;j++)
	{
		printf("%d",i+1);
	}
	printf("%d",i+2);
	printf("\n");
	}
	else
	{
		printf("%d",i+2);
		for(j=0;j<6;j++)
		{
			printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
}