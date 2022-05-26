#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	char arr[100] = { 0 };
	int i = 0, count = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (scanf("%s", arr) != EOF)
	{
		count++;

	}
	printf("%d", count);
	

}