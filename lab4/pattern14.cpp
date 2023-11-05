#include<stdio.h>
int main()
{
	int i,j,s,k,l,p;
	for(i=0;i<5;i++)
	{
		for(s=0;s<4-i;s++)
		printf(" ");
		for(j=0;j<2*i+1;j++)
		printf("*");
		printf("\n");
	}
	for(k=0;k<4;k++)
	{
		for(p=0;p<k+1;p++)
		printf(" ");
		for(l=0;l<7-2*k;l++)
		printf("*");
		printf("\n");
	}
	
}
