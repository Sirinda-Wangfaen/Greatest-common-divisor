#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int min, x, y, i;
	printf("Enter first number : ");
	scanf("%d", &x);
	printf("Enter second number : ");
	scanf("%d", &y);
	if (x < y) {
		min = x;
	}
	else min = y;
	for (i = min; i > 0; i--)
	{
		if (x % i == 0 && y % i == 0)
		{
			printf("Greatest common divisor = %d", i);
			break;
		}
	}
	return 0;
}
