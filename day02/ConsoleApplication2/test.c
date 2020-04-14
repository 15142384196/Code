#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void get_p(char* p)
{
	
	printf("%d\n", (char*)p);

}

void get_p3()
{
	char a[] = "fdyadaydaudsad";
}

void get_p2( char**q)
{
	*q = 0xaabb;
	printf("%p", *q);
}
int main(void)
{
	int a = 10;
	int b = 20;
	void *p = NULL;
	(char)p = &a;
	(char*)p = 20;
	get_p((char*)p);
	char* q = NULL;
	q = &b;
	get_p2(&q);
	get_p3();







	printf("\n");
	system("pause");
	return 0;

}