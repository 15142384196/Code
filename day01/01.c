#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main01(void)
{
	int a[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	int i, j, n, tmp = 0;

	n = sizeof(a) / sizeof(int);
	printf("≈≈–Ú«∞;");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;

			}

		}
	}
	printf("\n≈≈–Ú∫Û;");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}





void print_array( int *a,int n)
{
	int i = 0;
	n = sizeof(a) / sizeof(int);
	for ( i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}



void sort_array(int *a,int n)
{
	int i, j, tmp;
	for ( i = 0; i < n - 1; i++)
	{
		for (j = i + 1;j < n; j++)
		{
			if (a[i]>a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
}



int main(void)
{
	int a[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
	int n;
	int i, j, tmp = 0;
	n = sizeof(a) / sizeof(a[0]);
	printf("brfore: \n");
	print_array(a, n);
	sort_array(a, n);
	printf("after: \n");
	print_array(a, n);
	printf("\n");
	main01();
	system("pause");
	return 0;
}

