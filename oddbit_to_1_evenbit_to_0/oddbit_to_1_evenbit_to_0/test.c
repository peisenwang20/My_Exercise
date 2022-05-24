#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
    int a, i = 0;
    int count = 0;
    int sum = 0;
    int judge;
    //读取乐乐想要的数字
    while (scanf("%d", &a) != EOF)
    {
        sum = 0;
        i = 0;
        while (a)
        {
            judge = a % 10 % 2 ? 1 : 0;
            sum += judge * pow(10, i);
            i++;
            a /= 10;
        }
        printf("%d", sum);
    }
    return 0;
}