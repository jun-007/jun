#include<assert.h>
#include<stdio.h>
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len-1) = tmp;
//	}
//
//
//}

//三步翻转法
//abcdef
//ba fedc
//cdefab
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
	    right--;
	}

}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k < len);
	reverse(arr, arr + k - 1);//反转k个字符
	reverse(arr + k, arr + len - 1);//将剩下的字符反转
	reverse(arr, arr + len - 1);//反转所有字符
}
int is_leftmove(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(s1, 1);
		int ret=strcmp(s1, s2);
		if (ret == 0)
			return 1;
	}
	return 0;
}
int main()
{
	char s1[] = "abcdef";
	char s2[] = "cdefab";
	int ret = is_leftmove(s1, s2);
	if (ret == 1)
		printf("yes\n");
	else
		printf("no\n");

	return 0;
}
