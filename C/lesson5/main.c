#include<stdio.h>

int main()
{
	printf("Input the int value i:\n");
	int i, j;
	scanf("%d", &i);
	printf("Input the int value j:\n");
	scanf("%d", &j);
	if(j != 0)
	{	
		printf("%d / %d = %d\n", i, j, i/j);
	}
	else
	{
		fprintf(stderr, "j can not be 0\n");
		return 1;
	}
	return 0;
}
