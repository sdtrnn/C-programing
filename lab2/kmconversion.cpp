/* this program is to convert kilometer*/
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d", &a );
	b= a*1000;
	c= a*100000;
	d= a*1000000;
	printf("the value of a in meters is %d",b);
	printf("the value of a in cm is %d",c);
	printf("the value of a in mm is %d",d);
	return 0;
}
