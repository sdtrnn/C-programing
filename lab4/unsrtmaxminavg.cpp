/* This prgm is to find the min,max&avg in an unsorted array of integers */
#include<stdio.h>
int main()
{
	int i,j,n,k,s,l,a[n],max,min,avg;
	printf(" enter the value of n ");
	scanf("%d",&n);
	printf(" enter the values of numbers ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(k=1;k<n;k++)
	{
		if(a[k]>max)
		max=a[k];
	}
	printf(" the max number is %d", max);
	min=a[0];
	for(l=1;l<n;l++)
	{
		if(a[l]<min)
		min=a[l];
	}
	printf(" the min number is %d", min);
	s=0;
	for(i=0;i<n;i++)
	{
	  s+=a[i];
	  avg=s/n;  
	}
	printf(" the avg of numbers is %d", avg);
}
