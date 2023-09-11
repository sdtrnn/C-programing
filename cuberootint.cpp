/* this program is to find cube root of a number */
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
    scanf("%d", &a);
    b = pow(a,1/3);
    printf("the cube root of a is %d",b);
    return 0;
}
