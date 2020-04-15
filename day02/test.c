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


		//p = &b
void fun(int* p) //两个变量之一：形参参
{
	*p = 100; //通过 * 操作符进行间接赋值
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
	fun(&b); //两个变量之一：实参，给函数传参时，相当于建立关系






	printf("\n");
	system("pause");
	return 0;

}