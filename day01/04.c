#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* get_str1()
{
	char* p = "abcdef1";
	return p;
}

char* get_str2()
{
	char* q = "abcdef2";
	return q;
}
int main(void)
{
	char *p = NULL;
	char* q = NULL;
	p = get_str1();
	q = get_str2();
	printf("%s,%d", p,p);
	printf("\n");
	printf("%s,%d", q, q);
	printf("\n");
	system("pause");
	return 0;

}