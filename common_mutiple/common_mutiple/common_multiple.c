#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b;
	int i = 0;
	int result = 0;
	int key = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (b > a)
		{
			for (i = 1;i <= b;i++)
			{
				result = a * i;
				if (b > result)
					key = b % result;
				else if (result > b)
					key = result % b;
				if (key == 0)
				{
					if (b > result)
					{
						printf("%d", b);
						break;
					}
					else if (result > b)
					{
						printf("%d", result);
						break;
					}
						
				}
				
			}
		}
		else if (b == a)
		{
			printf("%d", b);
		}
		else
		{
			for (i = 1;i <= a;i++)
			{
				result = b * i;
				if (a > result)
					key = a % result;
				else if (result > a)
					key = result % a;
				if (key == 0)
				{
					if (a > result)
					{
						printf("%d", a);
						break;
					}
					else if (result > a)
					{
						printf("%d", result);
						break;
					}
						
				}

			}
		}
	}
	return 0;
}