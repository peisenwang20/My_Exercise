#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void sort_mission(int arr[], int sz)
{
	//目标是将奇数全部都位于偶数前面
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	while (left <= right)
	{
		if (arr[left] % 2 == 0 && arr[right] % 2 == 0)
		{
			right--;
		}
		else if (arr[left] % 2 != 0 && arr[right] % 2 == 0)
		{
			left++;
		}
		else if (arr[left] % 2 == 0 && arr[right] % 2 != 0)
		{
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
		else
		{
			left++;
		}
	}
}




int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);

	sort_mission(arr,sz);
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
