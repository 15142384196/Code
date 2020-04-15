#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void fun(char* p)
{
	strcpy(p, "sadadadadaw3dws");
}
int main(void)
{
	char buf[100] = { 0 };
	fun(buf);
	printf("\n");
	system("pause");
	return 0;

}