#include<stdio.h>
int main()
{
	int i,j,k,l;
    for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		printf("*");
		printf("\n");
	}
	for(k=0;k<5;k++)
	{
		for(l=0;l<k+1;l++)
		printf("*");
		printf("\n");
	}
}
