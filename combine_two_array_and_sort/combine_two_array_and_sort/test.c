#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n, m;
    //��ȡ��������ѧ�е����ָ���
    scanf("%d %d", &n, &m);
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    int sum[2000] = { 0 };
    int i, j, tmp;
    //��ȡ��һ����������
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    //��ȡ�ڶ�����������
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //�ϲ�������������
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
    //�Ժϲ�������н�����������
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
    //��ӡ���Ľ��
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}