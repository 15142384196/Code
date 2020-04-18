#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** getMem(int n)
{
	int i = 0;
	char** buf = (char**)malloc(n * sizeof(char*));
	if (buf == NULL)
	{
		return NULL;

	}
	for ( i = 0; i < n; i++)
	{
		buf[i] = (char*)malloc(30 * sizeof(char));
		char str[30];
		sprintf(str, "test%d%d", i, i);
		strcpy(buf[i], str);
	}
	return buf;
}

void print_buf(char** buf, int n)
{
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		printf("%s, ", buf[i]);
	}
	printf("\n");
}


void free_buf(char** buf, int n)
{
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		free(buf[i]);
		buf[i] = NULL;
	}
	
	if (buf != NULL)
	{
		free(buf);
		buf = NULL;
	}

}
int main(void)
{
	char** buf = NULL;
	int n = 3;

	buf = getMem(n);
	if (buf == NULL)
	{
		printf("gerMem error\n");
		return -1;
	}

	print_buf(buf, n);

	free_buf(buf, n);
	buf = NULL;

	printf("\n");
	system("pause");
	return 0;

}