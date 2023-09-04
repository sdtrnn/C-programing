/* this is program to multiply two floating point numbers and printing the output both in int and floating point reprasentations */
#include<stdio.h>
int main()
{
	float a, b, c;
	scanf("%f %f", &a, &b);
	c=a*b;
	printf("the product in float is %f", c);
	printf("the product in integer is %d", c);
	return 0;
}
