//����ת�ַ���
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

//������ת��
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
	reverse(arr, arr + k - 1);//��תk���ַ�
	reverse(arr + k, arr + len - 1);//��ʣ�µ��ַ���ת
	reverse(arr, arr + len - 1);//��ת�����ַ�
}
int main()
{
	char arr[] = "abcdef" ;
	left_move(arr,4);
	printf("%s\n", arr);
	return 0;
}
