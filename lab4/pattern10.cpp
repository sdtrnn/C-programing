#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=0;i<5;i++)
	{
		for(j=0;j<i+1;j++)
		printf("* ");
		printf("\n");
	}
	for(k=0;k<5;k++)
	{
		for(l=0;l<5-k;l++)
		printf("* ");
		printf("\n");
	}
}
