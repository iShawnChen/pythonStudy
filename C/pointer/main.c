#include<stdio.h>

void change(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 5;
	int b = 3;
	change(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
