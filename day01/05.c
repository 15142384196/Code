#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_str()
{
	char str[] = "adadewdaswd";
	return str;
}
char* get_str2()
{
	char *tmp = (char*)malloc(100);
	char str[] = "saswdwdqwsadw";
	if (tmp == NULL)
	{
		return NULL;
	}
	strcpy(tmp, str);
	return tmp;
}
int main(void)
{
	char buf[128] = { 0 };
	//strcpy(buf, get_str());
	//printf("buf = %s", buf);
	char* p = NULL;
	p = get_str2();
	if (p != NULL)
	{
		printf("%s\n", p);
		free(p);
		p = NULL;
		if (p != NULL)
		{
			free(p);
		}
	}
	
	printf("\n");
	system("pause");
	return 0;

}