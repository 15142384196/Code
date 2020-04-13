#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int b[10];
	printf(" %d , %d  \n", sizeof(a), sizeof(b));
	printf(" b:%d, &b:%d \n", b, &b);
	printf(" b+1:%d, &b+1:%d \n", b+1, &b+1);
	char* p = NULL;
	int* q = NULL;
	printf(" %d , %d ", sizeof(p), sizeof(q));






	printf("\n");
	system("pause");
}