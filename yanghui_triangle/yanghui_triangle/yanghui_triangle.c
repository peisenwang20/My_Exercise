#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int i, j, n;
	int arr[14][14] = { 0 };
	printf("请输入要打印的行数：");
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		arr[i][1] = 1;
		arr[i][i] = 1;
	}
	for (i = 3;i <= n;i++)
	{
		for (j = 2;j <= i-1;j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
	}
	for (i = 1; i <= n;i++)
	{
		for (j = 1;j <= i;j++)
		{
			printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}
}