#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


char* my_strcpy(char* arr1, const char* arr2)
{
	char* ret = arr1;
	assert(arr1 != NULL);
	assert(arr2 != NULL);

	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}





int main()
{
	char arr1[] = "$$$$$$$";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}