#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

	int a = 100;
	int *p = NULL;
	p = &a;
	*p = 55;
	printf("a = %d\n ", a);
	printf("\n");
	system("pause");
	return 0;

}