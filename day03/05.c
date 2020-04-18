#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printf_array(char a[][30], int n)
{
	int i = 0;
	for ( i = 0; i < n; i++)
	{
		printf("%s\n", a[i]);

	}
	printf("\n");
}

void sort_array(char a[][30], int n)
{
	int i, j = 0;
	int tmp[30];
	for ( i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (strcmp(a[i],a[j])>0)
			{
				strcpy(tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j],tmp);
			}
		}

	}
}


int main(void)
{

	char a[][30] = { "22222222222", "11111111111", "bbbbbbbbbbb", "aaaaaaaaaaaa" };
	int n = sizeof(a) / sizeof(a[0]);
	printf("before sorting:\n");
	printf_array(a, n);
	sort_array(a, n);
	printf("\nafter sorting:\n");
	printf_array(a, n);
	printf("\n");
	system("pause");
	return 0;

}