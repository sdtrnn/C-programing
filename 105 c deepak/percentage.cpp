/*this program is to calculate percentage a student given the marks of 5 different subjects*/
#include<stdio.h>
int main()
{
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d" , &a, &b, &c, &d, &e);
	f=(a+b+c+d+e)/5;
	printf("the percentage of student is %d", f);
	return 0;
}
