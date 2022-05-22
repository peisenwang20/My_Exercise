#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n, m;
    //读取两个升序学列的数字个数
    scanf("%d %d", &n, &m);
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int sum[2000] = { 0 };
    int i, j, tmp;
    //读取第一个升序序列
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //读取第二个升序序列
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //合并两个升序序列
    for (i = 0; i < m + n; i++)
    {
        if (i < n)
        {
            sum[i] = arr1[i];
        }
        else
        {
            sum[i] = arr2[i - n];
        }
    }
    //对合并后的序列进行升序排序
    for (i = 0; i < m + n - 1; i++)
    {
        for (j = 0; j < m + n - 1 - i; j++)
        {
            if (sum[j] > sum[j + 1])
            {
                tmp = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = tmp;
            }

        }
    }
    //打印最后的结果
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}