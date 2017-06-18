#include<stdio.h>
#include"max.h"
#include"min.h"

int main()
{
	int maxnum = max(33, 21);
	int minnum = min(33, 21);
	printf("The max num is %d\n", maxnum);
	printf("The min num is %d\n", minnum);
	return 0;
}
