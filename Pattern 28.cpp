#include<stdio.h>
int main ()
{
	int i,j,n;
	char ch='A';
	printf("Enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
	return 0;
}
