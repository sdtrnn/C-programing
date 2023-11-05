#include<stdio.h>
int main()
{
	int i,j,k,l,s,p;
	for(i=0;i<5;i++)
	{
	    for(s=0;s<i;s++)
		printf(" ");
	    for(j=0;j<5-i;j++)
		printf("*");
		printf("\n");
	}
	for(k=0;k<5;k++)
	{
		for(p=0;p<4-k;p++)
		printf(" ");
		for(l=0;l<k+1;l++)
		printf("*");
		printf("\n");
		
	}
}
