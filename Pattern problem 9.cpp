#include<stdio.h>
int main ()
{
	int n,i,s,j;
	printf("Enter the number of rows\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(s=0;s<i;s++)
		printf(" ");
		for(j=0;j<n;j++)
		printf("* ");
		printf("\n");
	}
	return 0;
}