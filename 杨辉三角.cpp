#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Ñî»ÔÈý½Ç
//          1
//         1 1
//        1 2 1
//       1 3 3 1
//      1 4 6 4 1
//     1 5 10 10 5 1
//    1 6 15 20 15 6 1
//   1 7 21 35 35 21 7 1
//  1 8 28 56 70 56 28 8 1
// 1 9 36 84 126 126 86 36 9 1
int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if ((i >= 2) && (j >= 1))
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
		
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

