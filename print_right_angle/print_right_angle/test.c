#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
    int length;
    int i, j;
    while (scanf("%d", &length) != EOF)
    {
        for (i = 0;i < length;i++)
        {
            for (j = 0;j < length;j++)
            {
                if (j < length - i - 1)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}