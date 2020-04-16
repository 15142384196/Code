#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main01(void)
{
	char* p = "11abcd111122abcd333abcd3322abcd3333322qqq";
	int n = 0;
	do
	{
		p = strstr(p, "abcd");
		if (p != NULL)
		{
			n++;
			p = p + strlen("abcd");
		}
		else
		{
			break;
		}
	} while (*p != 0);
	printf("n = %d\n", n);
	
		







	printf("\n");
	system("pause");
	return 0;

}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main02(void)
{
	char* p = "11abcd111122abcd333abcd3322abcd3333322qqq";
	int n = 0;
	while ((p = strstr(p,"abcd")) != NULL )
	{
		n++;
		p = p + strlen("abcd");

		if ( *p == NULL)
		{
			break;

		}
	}
	printf("n = %d\n", n);




	printf("\n");
	system("pause");
	return 0;

}



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int my_strstr(char* p, int* n)
{
	int i = 0;
	char* tmp = p;
	while ((tmp = strstr(tmp, "abcd")) != NULL)
	{
		i++;
		tmp = tmp + strlen("abcd");

		if (*tmp == 0)
		{
			break;

		}
	}
	*n = i;
	return 0;
}


int main(void)
{
	char* p = "11abcd111122abcd333abcd3322abcd3333322qqq";
	int n = 0;

	int ret = 0;
	ret = my_strstr(p,&n);
	if (ret != 0)
	{
		return 0;
			 
	}
	printf("n = %d\n", n);
	printf("\n");
	system("pause");
	return 0;

}