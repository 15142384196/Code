#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>






int main01(void)
{
	char src[] = "aqdqdqedqedqe";
	int i;
	char dst[100];
	
	for ( i = 0; src[i] != 0; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = 0;
	printf("%s", dst);
	printf("\n");
	system("pause");
	return 0;

}


void my_strcpy(char* dst, char* src)
{
	int i = 0;
	for (i = 0; src[i] != 0; i++)
	{
		dst[i] = src[i];
	}
	dst[i] = 0;
}


int main(void)
{
	char src[] = "aqdqdqedqedqe";
	char dst[100];
	my_strcpy(dst, src);
	printf("%s", dst);
	



	printf("\n");
	system("pause");
	return 0;

}



