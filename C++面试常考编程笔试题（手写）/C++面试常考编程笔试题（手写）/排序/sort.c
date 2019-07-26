/**
  *  @brief  ��������
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
			j--;  //j������
		}
		if (i < j)
		{
			s[i] = s[j];  //�ҵ���ֵ��s[i];
			i++;
		}
		//step2

		while (i < j&&s[i] < temp)
		{
			i++;  //i�����ƶ�
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
  *  @brief  ��������������ɹ鲢����
  *  @param[in]   int array[],int left,int mid,int right,int temp[]
  *  @param[out]  void
  *  @Return:     void
  *  - TRUE
  *  - FALSE
  *  @note   matters needing attention
  *  @see    other functions   
**/
//�ϲ�������������
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
	while (i <= mid)//�����ʣ��Ԫ������temp��
	{
		temp[k++] = array[i++];
	}
	while (j <= right)//��������ʣ��Ԫ������temp��
	{
		temp[k++] = array[j++];
	}

	k = 0;//���kֵ
	//��temp�е�Ԫ��ȫ��������ԭ������
	while (left <= right)
	{
		array[left++] = temp[k++];
	}
}

//�������
void devide_array(int array[], int left, int right, int temp[])
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) / 2;
	devide_array(array, left, mid, temp);   //�������
	devide_array(array, mid + 1, right, temp); // �ұ�����
	merge_array(array, left, mid, right, temp); //��������������ϲ�
}

//����һ����ʱ�����飬���ڱ���ϲ�������
void MergeSort(int array[], int len)
{
	//����һ����ʱ�����飬�û�����ϲ�������
	int *num = (int*)malloc(sizeof(int)*len);
	//int temp[len]={0};
	devide_array(array, 0, len - 1, num);
}