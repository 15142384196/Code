#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*有一个字符串“1a2b3d4z”；
   要求写一个函数实现如下功能：
	功能1：把偶数位字符挑选出来，组成一个字符串1。
	功能2：把奇数位字符挑选出来，组成一个字符串2。
	功能3：把字符串1和字符串2，通过函数参数，传送给main，并打印。
	功能4：主函数能测试通过。
	int getStr1Str2(char *source, char *buf1, char *buf2);*/

int getStr1Str2(char* source, char* buf1, char* buf2)
{
	if (source == NULL || buf1 == NULL || buf2 == NULL)
	{
		return -1;
	}
	int n = strlen(source);
	int i;
	for ( i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			 *buf1 = source[i];
			 buf1++;
		}
		else
		{
			 *buf2 = source[i];
			 buf2++;
		}
	}

	return 0;
}


int main(void)
{


	char* p = "1a2b3d4z";
	char buf1[50] = { 0 };
	char buf2[50] = { 0 };
	int ret = getStr1Str2(p,buf1,buf2);
	if (ret != 0)
	{
		printf("getStr1Str2 error:%d", ret);
	}
	printf("buf1 = %s\n", buf1);
	printf("buf2 = %s\n", buf2);








	printf("\n");
	system("pause");
	return 0;

}