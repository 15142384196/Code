#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*��һ���ַ�����1a2b3d4z����
   Ҫ��дһ������ʵ�����¹��ܣ�
	����1����ż��λ�ַ���ѡ���������һ���ַ���1��
	����2��������λ�ַ���ѡ���������һ���ַ���2��
	����3�����ַ���1���ַ���2��ͨ���������������͸�main������ӡ��
	����4���������ܲ���ͨ����
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