#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


size_t my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}






int main()
{
	char arr[] = "abcdef";
	int i = my_strlen(arr);

	printf("%d", i);
	return 0;
}