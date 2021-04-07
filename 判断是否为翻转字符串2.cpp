#include<string.h>
#include<stdio.h>
int left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	//1.在str1字符串中追加一个str1字符串
	//strcat(str1,str1)//err;
	strncat(str1, str1, len1);
	//2.判断str2是否为str1 的子集
	char*ret=strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = { "abcdef" };
	char arr2[] = { "cdefab" };
	int ret = left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("Yes\n");

	}
	else
	{
		printf("No\n");
	}
	return 0;
}
