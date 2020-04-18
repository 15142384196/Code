#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array(char** p, int n)
{
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		printf("%s ",p[i]);
		printf("\n");
	}

}

void sort_array(char** p, int n)
{
	int i, j;
	char* tmp;
	for ( i = 0; i < n - 1; i++)
	{
		for ( j = i + 1; j < n; j++)
		{
			if (strcmp(p[i],p[j]) >0)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
			}
			
	}
}





int main(void)
{
	char* p[] = { "1111","0000","aaaa","bbbb" };
	int n = sizeof(p) / sizeof(p[0]);
	printf("before:\n");
	print_array(p, n);
	sort_array(p, n);
	printf("\nafter:\n");
	print_array(p, n);


















#if 0
	char* p[] = { "1111","0000","aaaa","bbbb" };
	int i, j = 0;
	int n = sizeof(p) / sizeof(p[0]);
	char* tmp = NULL;
	printf("before:\n");
	for ( i = 0; i < n; i++)
	{
		printf("%s ", p[i]);
	}
	for ( i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(p[i], p[j]) > 0)
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}

		}
	}
	
	printf("\nafter:\n");
	for (i = 0; i < n; i++)
	{
		printf("%s ", p[i]);
	}
#endif
	printf("\n");
	system("pause");
	return 0;

}