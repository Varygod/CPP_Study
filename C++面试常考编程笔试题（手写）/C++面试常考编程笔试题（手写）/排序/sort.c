/**
  *  @brief  快速排序
  *  @param[in]   s[],left,right
  *  @param[out]  void
  *  @Return:     void
  *  - TRUE
  *  - FALSE
  *  @note   matters needing attention
  *  @see    other functions   
**/
#include "sort.h"
#include <malloc.h>
void quick_sort(int s[], int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int i = left, j = right, temp = s[i];

	while (i < j)
	{
		//step1 
		while (i < j&&s[j] >= temp)
		{
			j--;  //j向左移
		}
		if (i < j)
		{
			s[i] = s[j];  //找到后赋值给s[i];
			i++;
		}
		//step2

		while (i < j&&s[i] < temp)
		{
			i++;  //i向右移动
		}
		if (i < j)
		{
			s[j] = s[i];
			j--;
		}
	}
	s[i] = temp;
	quick_sort(s, left, i - 1);
	quick_sort(s, i + 1, right);
}


/**
  *  @brief  以下三个函数完成归并排序
  *  @param[in]   int array[],int left,int mid,int right,int temp[]
  *  @param[out]  void
  *  @Return:     void
  *  - TRUE
  *  - FALSE
  *  @note   matters needing attention
  *  @see    other functions   
**/
//合并两个有序数组
void merge_array(int array[], int left, int mid, int right, int temp[])
{
	int i = left, j = mid + 1, k = 0;
	while (i <= mid && j <= right)
	{
		if (array[i] < array[j])
		{
			temp[k++] = array[i++];
		}
		else
		{
			temp[k++] = array[j++];
		}
	}
	while (i <= mid)//将左边剩余元素填充进temp中
	{
		temp[k++] = array[i++];
	}
	while (j <= right)//将右序列剩余元素填充进temp中
	{
		temp[k++] = array[j++];
	}

	k = 0;//清空k值
	//将temp中的元素全部拷贝到原数组中
	while (left <= right)
	{
		array[left++] = temp[k++];
	}
}

//拆分数组
void devide_array(int array[], int left, int right, int temp[])
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	devide_array(array, left, mid, temp);   //左边有序
	devide_array(array, mid + 1, right, temp); // 右边有序
	merge_array(array, left, mid, right, temp); //将两个有序数组合并
}

//创建一个临时的数组，用于保存合并的数组
void MergeSort(int array[], int len)
{
	//创建一个临时的数组，用户保存合并的数组
	int *num = (int*)malloc(sizeof(int)*len);
	//int temp[len]={0};
	devide_array(array, 0, len - 1, num);
}